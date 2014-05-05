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

class PlayState extends FlxState {

	private var gun:FlxSprite;

	private var bulletPool:FlxTypedGroup<FlxSprite>;

	// variable to track the elapsed time
	private var elapsed:Float = 0xFFFF;

	// define constants
	private var SHOT_DELAY = 0.1; // 100ms
	private var BULLET_SPEED = 500;
	private var NUMBER_OF_BULLETS = 1;

	// setup the example
	public override function create():Void {
		super.create();

		// Set stage background to something sky colored
		FlxG.cameras.bgColor = 0xFF4488CC; // ARGB

		// Create an object representing our gun
		gun = new FlxSprite(50, FlxG.height / 2);
		gun.loadGraphic("assets/bullet.png");

		bulletPool = new FlxTypedGroup<FlxSprite>();

		// Create an object pool of bullets
		for(i in 0...NUMBER_OF_BULLETS) {
			// create bullet
			var bullet = new FlxSprite(this.gun.x, this.gun.y);
			bullet.loadGraphic("assets/bullet.png");

			// add bullet to pool
			bulletPool.add(bullet);

			// Set its initial state to "dead".
			bullet.kill();
		}

		this.add(gun);
		this.add(bulletPool);
	}

	public override function destroy():Void {
		super.destroy();
	}

	// update() method is called every frame
	public override function update():Void {
		// add to elapsed time
		elapsed += FlxG.elapsed;

		// if primary mouse button is pressed
		if(FlxG.mouse.justPressed) {
			shootBullet();
		}

		// if a bullet is not on screen, kill it!
		for(bullet in bulletPool) {
			if(!bullet.isOnScreen(FlxG.camera)) {
				bullet.kill();
			}
		}

		super.update();
	}

	private function shootBullet():Void {
		// if not enough time is elapsed stop
		if(elapsed < this.SHOT_DELAY) {
			return;
		}

		elapsed = 0;

		// get a dead bullet from the pool
		var bullet = cast bulletPool.getFirstDead();

		// if there is no dead bullet return
		if(bullet == null) {
			return;
		}

		// mark bullet as alive
		bullet.revive();

		// Set the bullet position to the gun position.
		bullet.reset(this.gun.x, this.gun.y);

		// Shoot it! Peng!
		bullet.velocity.x = this.BULLET_SPEED;
		bullet.velocity.y = 0;
	}
}