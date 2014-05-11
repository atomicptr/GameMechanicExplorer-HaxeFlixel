var should_hide = false;
var is_hidden = false;

$(document).ready(function() {

	// load script
	$.get("src/states/PlayState.hx", function(data) {
		$("#code-example").html(data);

		sh_highlightDocument();
	});

	// format iframe
	var width = $('.game-container iframe').width();
	
	width = Math.ceil(width / 32) * 32;
	
	var height = Math.ceil((width * 0.4) / 32) * 32;
	
	$('.game-container iframe').width(width);
	$('.game-container iframe').height(height);
	
	// show width, height
	//$(".jumbotron").html(width + ", " + height);
	
	if(width < 600) {
		$("#game-frame").width(1);
		$("#game-frame").height(1);
	}
});

// reload page on orientation change
$(window).on('orientationchange', function(e) {
	window.location.reload();
});

function gameframe_fullscreen() {

	
	var gameFrame = document.getElementById('game-frame');
	
	if(gameFrame.webkitRequestFullscreen) {
		gameFrame.webkitRequestFullscreen();
	} else {
		gameFrame.mozRequestFullscreen();
	}
	
	gameFrame.focus();
}

$(document).on('webkitfullscreenchange mozfullscreenchange fullscreenchange', function() {	
	var gameFrame = document.getElementById('game-frame');
	gameFrame.contentDocument.location.reload(true);
});