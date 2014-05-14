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
import flixel.util.FlxAngle;

class PlayState extends FlxState {

	private var ship:FlxSprite;

	// define movement constant
	private var ROTATION_SPEED = 180;
	private var ACCELERATION = 200;
	private var MAX_SPEED = 250;
	private var DRAG = 50;

	// setup the example
	public override function create():Void {
		super.create();

		FlxG.mouse.visible = false;

		// set the stage background
		FlxG.cameras.bgColor = 0xFF333333; // ARGB

		// create the ship
		ship = new FlxSprite(FlxG.width / 2, FlxG.height / 2);
		ship.loadGraphic("assets/ship.png", true, 32, 32);
		ship.angle = -90;

		ship.drag.x = DRAG;
		ship.drag.y = DRAG;

		ship.maxVelocity.x = MAX_SPEED;
		ship.maxVelocity.y = MAX_SPEED;

		this.add(ship);
	}

	public override function destroy():Void {
		super.destroy();
	}

	// update() method is called every frame
	public override function update():Void {
		// keep the ship on the screen
		if(ship.x > FlxG.width) {
			ship.x = 0;
		}

		if(ship.x < 0) {
			ship.x = FlxG.width;
		}

		if(ship.y > FlxG.height) {
			ship.y = 0;
		}

		if(ship.y < 0) {
			ship.y = FlxG.height;
		}

		if(leftPressed()) {
			// if the LEFT key is down, rotate left
			ship.angularVelocity = -ROTATION_SPEED;
		} else if(rightPressed()) {
			// if the RIGHT key is down, rotate right
			ship.angularVelocity = ROTATION_SPEED;
		} else {
			// stop rotating
			ship.angularVelocity = 0;
		}

		if(upPressed()) {
			// if up key is down, thrust
			// calculate acceleration vector based on ship angle and acceleration
			ship.acceleration.x = Math.cos(ship.angle * FlxAngle.TO_RAD) * ACCELERATION;
			ship.acceleration.y = Math.sin(ship.angle * FlxAngle.TO_RAD) * ACCELERATION;

			// show the frame from the spritesheet with the engine on
			ship.animation.frameIndex = 1;
		} else {
			// otherwise stop thrusting
			ship.acceleration.x = 0;
			ship.acceleration.y = 0;

			// show the frame from the spritesheet with the engine off
			ship.animation.frameIndex = 0;
		}

		super.update();
	}

	private function leftPressed(?useJustPressed:Bool = false):Bool {
		var leftKeyPressed = useJustPressed ? FlxG.keys.anyPressed(["LEFT"]) : FlxG.keys.anyJustPressed(["LEFT"]);

		var pressed = useJustPressed ? FlxG.mouse.justPressed : FlxG.mouse.pressed;

		var touchLeft = pressed && FlxG.mouse.x < FlxG.width / 4;

		return leftKeyPressed || touchLeft;
	}

	private function rightPressed(?useJustPressed:Bool = false):Bool {
		var rightKeyPressed = useJustPressed ? FlxG.keys.anyPressed(["RIGHT"]) : FlxG.keys.anyJustPressed(["RIGHT"]);

		var pressed = useJustPressed ? FlxG.mouse.justPressed : FlxG.mouse.pressed;

		var touchRight = pressed && FlxG.mouse.x > FlxG.width / 2 + FlxG.width / 4;

		return rightKeyPressed || touchRight;
	}

	private function upPressed(?useJustPressed:Bool = false):Bool {
		var upKeyPressed = useJustPressed ? FlxG.keys.anyPressed(["UP"]) : FlxG.keys.anyJustPressed(["UP"]);

		var pressed = useJustPressed ? FlxG.mouse.justPressed : FlxG.mouse.pressed;

		var touchUp = pressed && FlxG.mouse.y < FlxG.height /2;

		return upKeyPressed || touchUp;
	}
}