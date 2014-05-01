package;

import flash.Lib;
import flixel.FlxGame;
import flixel.FlxState;

import states.PlayState;

class GameClass extends FlxGame {
	var gameWidth:Int = 800;
	var gameHeight:Int = 480;
	var initialState:Class<FlxState> = PlayState;
	
	// If -1, zoom is automatically calculated to fit the window dimensions.
	var zoom:Float = -1;
	
	// How many frames per second the game should run at.
	var framerate:Int = 60;
	
	// Whether to skip the flixel splash screen that appears in release mode.
	var skipSplash:Bool = true; 
	
	// Whether to start the game in fullscreen on desktop targets
	var startFullscreen:Bool = false; 

	/**
	 * You can pretty much ignore this logic and edit the variables above.
	 */
	public function new() {
		var stageWidth:Int = Lib.current.stage.stageWidth;
		var stageHeight:Int = Lib.current.stage.stageHeight;

		if (zoom == -1) {
			var ratioX:Float = stageWidth / gameWidth;
			var ratioY:Float = stageHeight / gameHeight;
			zoom = Math.min(ratioX, ratioY);
			gameWidth = Math.ceil(stageWidth / zoom);
			gameHeight = Math.ceil(stageHeight / zoom);
		}

		super(gameWidth, gameHeight, initialState, zoom, framerate, framerate, skipSplash, startFullscreen);
	}
}
