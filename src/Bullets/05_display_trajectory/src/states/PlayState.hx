// This simple example uses HaxeFlixel

// Copyright © 2014 John Watson (Example in JS and Assets)
// Copyright © 2014 Christopher Kaster (Port to HaxeFlixel)
// Licensed under the terms of the MIT License

package states;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.group.FlxTypedGroup;
import flixel.util.FlxTimer;
import flixel.util.FlxAngle;
import flixel.FlxObject;
import flixel.util.FlxSpriteUtil;

class PlayState extends FlxState {

	// a sprite that represents our gun
	private var gun:FlxSprite;

	// group that contains the bullets
	private var bulletPool:FlxTypedGroup<FlxSprite>;
	
	// group that contains the explosions
	private var explosionPool:FlxTypedGroup<FlxSprite>;
	
	// group that contains the ground elements
	private var ground:FlxTypedGroup<FlxSprite>;
	
	// the display trajectory
	private var trajectory:FlxSprite;
	
	private var timeOffset:Int = 0;

	// variable to track the elapsed time
	private var elapsed:Float = 0xFFFF;

	// define constants
	private var SHOT_DELAY = 0.3; // 300ms
	private var BULLET_SPEED = 800;
	private var NUMBER_OF_BULLETS = 20;
	private var GRAVITY = 980;

	// setup the example
	public override function create():Void {
		super.create();

		// set stage background to something sky colored
		FlxG.cameras.bgColor = 0xFF4488CC; // ARGB
		
		// create the gun sprite
		gun = new FlxSprite(50, FlxG.height - 74);
		gun.loadGraphic("assets/bullet.png");

		// create a pool of bullets that we can shoot
		bulletPool = new FlxTypedGroup<FlxSprite>();

		// fill the bulletPool with the maximum number of bullets that can exist at once
		for(i in 0...NUMBER_OF_BULLETS) {
			// create bullet
			var bullet = new FlxSprite(gun.x, gun.y);
			bullet.loadGraphic("assets/bullet.png");

			// set gravity
			bullet.acceleration.y = GRAVITY;
			
			// add bullet to pool
			bulletPool.add(bullet);

			// set its initial state to "dead" - it will be revived when it's shot
			bullet.kill();
		}

		// create a group which will contain the ground elements
		ground = new FlxTypedGroup<FlxSprite>();
		
		// create all ground blocks
		for(i in 0...Std.int(FlxG.width / 32)) {
			var x = i * 32;
			
			var groundBlock = new FlxSprite(x, FlxG.height - 32);
			groundBlock.loadGraphic("assets/ground.png");
			
			groundBlock.immovable = true;
			
			// add the ground block to the ground group
			ground.add(groundBlock);
		}
		
		// create a group which will contain the 
		explosionPool = new FlxTypedGroup<FlxSprite>();
		
		trajectory = new FlxSprite();
		trajectory.makeGraphic(FlxG.width, FlxG.height, 0x00000000);
		
		// add gun and bulletPool to this FlxState (this is what causes them to update and draw)
		this.add(ground);
		this.add(gun);
		this.add(bulletPool);
		this.add(explosionPool);
		this.add(trajectory);
	}

	public override function destroy():Void {
		super.destroy();
	}

	// update() method is called every frame
	public override function update():Void {
		// add to elapsed time
		elapsed += FlxG.elapsed;

		// drwa the trajectory every frame
		this.drawTrajectory();
		
		// set the gun angle
		gun.angle = FlxAngle.angleBetweenMouse(gun, true);

		// if primary mouse button is pressed and enough time has elapsed since last shot
		if(FlxG.mouse.pressed && elapsed >= SHOT_DELAY) {
			shootBullet();

			// reset elapsed
			elapsed = 0;
		}

		// if a bullet is alive and not on screen, kill it!
		for(bullet in bulletPool) {
			if(bullet.alive) {
				bullet.angle = Math.atan2(bullet.velocity.y, bullet.velocity.x) * FlxAngle.TO_DEG;
				
				if(!bullet.isOnScreen(FlxG.camera)) {
					bullet.kill();
				}
			}
		}
		
		// if a explosion is alive and the animation is done, kill it!
		for(explosion in explosionPool) {
			if(explosion.alive && explosion.animation.finished) {
				explosion.kill();
			}
		}

		super.update();
		
		// call onBulletHitsGround whenever a bullet hits the ground
		FlxG.collide(bulletPool, ground, onBulletHitsGround);
	}

	private function drawTrajectory():Void {
		FlxSpriteUtil.beginDraw(0x00000000);
		
		// clear the screen
		FlxSpriteUtil.fill(trajectory, 0x00000000);
		
		// calculate a time offset. This offset is used to alter the starting
		// time of the draw loop so that the dots are offset a little bit each
		// frame. It gives the trajectory a "marching ants" style animation.
		var marchSpeed = 40;
		timeOffset = timeOffset + 1;
		timeOffset = timeOffset % marchSpeed;
		
		var correctionFactor = 0.99;
		
		// draw the trajectory
		// http://en.wikipedia.org/wiki/Trajectory_of_a_projectile#Angle_required_to_hit_coordinate_.28x.2Cy.29
		var theta = -(gun.angle * FlxAngle.TO_RAD);
		
		var x = 0.0;
		var y = 0.0;
		
		var t = 0 + timeOffset / (1000 * marchSpeed / 60);
		
		while(t < 3) {
			x = BULLET_SPEED * t * Math.cos(theta) * correctionFactor;
			y = BULLET_SPEED * t * Math.sin(theta) * correctionFactor - 0.5 * GRAVITY * t * t;
			
			FlxSpriteUtil.drawRect(trajectory, x + gun.x + gun.origin.x, gun.y + gun.origin.y - y, 3, 3, 0x80FFFFFF);
			
			if(y < -15) {
				break;
			}
			
			t += 0.03;
		}
		FlxSpriteUtil.endDraw(trajectory);
		
		trajectory.dirty = true;
	}
	
	private function shootBullet():Void {
		// get a dead bullet from the pool
		var bullet:FlxSprite = cast bulletPool.getFirstDead();

		// if there is no dead bullet return
		if(bullet == null) {
			return;
		}

		bullet.revive();

		// set the bullet position to the gun position.
		bullet.reset(gun.x, gun.y);

		// set the bullet angle
		bullet.angle = FlxAngle.angleBetweenMouse(bullet, true);

		// shoot in the right direction! Peng!
		bullet.velocity.x = Math.cos(bullet.angle * FlxAngle.TO_RAD) * BULLET_SPEED;
		bullet.velocity.y = Math.sin(bullet.angle * FlxAngle.TO_RAD) * BULLET_SPEED;
	}
	
	private function onBulletHitsGround(bullet:FlxObject, ground:FlxObject) {
		this.getExplosion(bullet.x, bullet.y);
		
		bullet.kill();
	}
	
	private function getExplosion(x:Float, y:Float):FlxSprite {
		// get a dead explosion from the group
		var explosion:FlxSprite = cast explosionPool.getFirstDead();
		
		// if there aren't any, create a new one
		if(explosion == null) {
			explosion = new FlxSprite();
			explosion.loadGraphic("assets/explosion.png", true);
			
			explosion.animation.add("boom", [0, 1, 2, 3], 60, false);
			
			explosionPool.add(explosion);
		}
		
		// revive the explosion
		explosion.revive();
		
		// set the explosions position to the given position
		explosion.x = x - 64; // subtract 64 to center the explosion
		explosion.y = y - 64;
		
		// set rotation to a random value to add a little bit of variety
		explosion.angle = Std.random(360);
		
		// play the animation
		explosion.animation.play("boom");
		
		return explosion;
	}
}
