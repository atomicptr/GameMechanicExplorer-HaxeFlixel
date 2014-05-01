// This simple example uses HaxeFlixel

// Copyright © 2014 John Watson (Example in JS and Assets)
// Copyright © 2014 Christopher Kaster (Port to HaxeFlixel)
// Licensed under the terms of the MIT License

package states;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.group.FlxGroup;

class PlayState extends FlxState {

	private var player:FlxSprite;
	private var ground:FlxGroup;
	
	// Set a variable that is true when the player is touching the ground
	private var onTheGround = true;
	
	// define movement constants
	private var MAX_SPEED:Int = 250;
	private var ACCELERATION:Int = 600;
	private var DRAG:Int = 400;
	private var GRAVITY:Int = 980;
	private var JUMP_SPEED:Int = -600; // negative y is up
	
	// setup the example
	public override function create():Void {
		super.create();
		
		// Set stage background to something sky colored
		FlxG.cameras.bgColor = 0xFF4488CC; // ARGB
		
		// create the player
		player = new FlxSprite();
		player.loadGraphic("assets/player.png");
		
		player.x = FlxG.width / 2;
		player.y = FlxG.height - 64;
		
		// set player maximum movement speed
		player.maxVelocity.x = this.MAX_SPEED;
		player.maxVelocity.y = this.MAX_SPEED * 10;
		
		// add drag to the player that slows them down when they are not accelerating
		player.drag.x = this.DRAG;
		
		// create the ground
		ground = new FlxGroup();
		
		for(i in 0...Std.int(FlxG.width / 32)) {
			var x = i * 32;
			
			// create new ground block
			var groundBlock = new FlxSprite(x, FlxG.height - 32);
			groundBlock.loadGraphic("assets/ground.png");
			
			// make the block immovable
			groundBlock.immovable = true;
			
			// add ground block to ground group
			ground.add(groundBlock);
		}
		
		// add some height markers
		var heightMarkers:FlxGroup = new FlxGroup();
		
		var y = FlxG.height - 32;
		
		while(y >= 64) {
			
			for(i in 0...Std.int(FlxG.width / 32)) {
				var x = i * 32;
				
				var marker = new FlxSprite(x, y);
				
				marker.loadGraphic("assets/heightmarker.png");
				
				heightMarkers.add(marker);
			}
			
			y -= 32;
		}
		
		// add ground group and player to the stage
		this.add(ground);
		this.add(player);
		this.add(heightMarkers);
	}
	
	public override function destroy():Void {
		super.destroy();
	}

	// update() method is called every frame
	public override function update():Void {
		super.update();
		
		if(FlxG.keys.anyPressed(["LEFT"])) {
			// If the LEFT key is down, set the players velocity to move left
			player.acceleration.x = -this.ACCELERATION;
		} else if(FlxG.keys.anyPressed(["RIGHT"])) {
			// If the RIGHT key is down, set the players velocity to move right
			player.acceleration.x = this.ACCELERATION;
		} else {
			player.acceleration.x = 0;
		}
		
		if(onTheGround && FlxG.keys.anyPressed(["UP"])) {
			// Jump when the player is touching the ground an the up arrow is pressed;
			player.velocity.y = this.JUMP_SPEED;
			
			onTheGround = false;
		}
		
		// when not on the ground use gravity
		if(!onTheGround) {
			player.acceleration.y = this.GRAVITY;
		}
		
		// Collide the player with the ground, call onGround method when player hits ground
		FlxG.collide(player, ground, onGround);
	}
	
	// player is now on ground
	private function onGround(player:FlxSprite, groundBlock:FlxSprite) {
		this.onTheGround = true;
		
		// we're now back on the ground, disable gravity
		player.acceleration.y = 0;
	}
}