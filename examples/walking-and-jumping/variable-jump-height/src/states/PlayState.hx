// This simple example uses HaxeFlixel

// Copyright © 2014 John Watson (Example in JS and Assets)
// Copyright © 2014 Christopher Kaster (Port to HaxeFlixel)
// Licensed under the terms of the MIT License

package states;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.util.FlxTimer;
import flixel.group.FlxGroup;
import flixel.FlxObject;

class PlayState extends FlxState {

	private var player:FlxSprite;
	private var ground:FlxGroup;
	private var variableJumpTimer:FlxTimer;

	// set a flag for tracking if the timer is already started
	private var timerStarted = false;

	// set a flag for tracking if we've double jumped
	private var canDoubleJump = true;

	// set a flag for tracking if the player can adjust their jump height
	private var canVariableJump = true;

	// define movement constants
	private var MAX_SPEED:Int = 250;
	private var ACCELERATION:Int = 600;
	private var DRAG:Int = 400;
	private var GRAVITY:Int = 980;
	private var JUMP_SPEED:Int = -340; // negative y is up
	private var VARIABLE_JUMP_TIME:Float = 0.4; // time in seconds

	// setup the example
	public override function create():Void {
		super.create();

		FlxG.mouse.visible = false;

		// set stage background to something sky colored
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

		// add gravity
		player.acceleration.y = this.GRAVITY;

		// create timer for variable jumps
		variableJumpTimer = new FlxTimer();

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
		var onTheGround = player.isTouching(FlxObject.FLOOR);

		if(FlxG.keys.anyPressed(["LEFT"])) {
			// if the LEFT key is down, set the players velocity to move left
			player.acceleration.x = -this.ACCELERATION;
		} else if(FlxG.keys.anyPressed(["RIGHT"])) {
			// if the RIGHT key is down, set the players velocity to move right
			player.acceleration.x = this.ACCELERATION;
		} else {
			player.acceleration.x = 0;
		}

		if(onTheGround) {
			this.canDoubleJump = true;
			this.canVariableJump = true;
		}

		if(FlxG.keys.anyJustPressed(["UP"])) {
			if(canDoubleJump && !timerStarted) {
				canVariableJump = true;
			}

			if(canDoubleJump || onTheGround) {
				// jump when player is touching the ground or they can double jump
				player.velocity.y = this.JUMP_SPEED;

				if(!onTheGround) {
					canDoubleJump = false;
				}
			}
		}

		// keep y velocity constant while the jump button is held for up to 400ms (default value)
		if(canVariableJump && FlxG.keys.anyPressed(["UP"])) {

			// start timer
			if(!timerStarted) {
				variableJumpTimer.start(VARIABLE_JUMP_TIME, onVariableJumpEnds, 1);

				timerStarted = true;
			}

			player.velocity.y = JUMP_SPEED;
		}

		// don't allow variable jump height after jump button is released
		if(!FlxG.keys.anyPressed(["UP"])) {
			canVariableJump = false;
		}

		super.update();

		// collide the player with the ground
		FlxG.collide(player, ground);
	}

	// callback when the variable jump ends
	private function onVariableJumpEnds(timer:FlxTimer) {
		this.canVariableJump = false;

		// reset variable to use timer again
		timerStarted = false;
	}
}