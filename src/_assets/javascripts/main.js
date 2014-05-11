var should_hide = false;
var is_hidden = false;

$(document).ready(function() {
	$("#btn-download-apk").hide();

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
	
	// check if fullscreen api is available, if not remove fullscreen button
	if(!fullscreenAvailable()) {
		$("#btn-fullscreen").remove();
	}
	
	// if android, show apk download button
	if(isAndroid()) {
		$("#btn-download-apk").show();
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
	} else if(gameFrame.mozRequestFullscreen) {
		gameFrame.mozRequestFullscreen();
	} else {
		gameFrame.msRequestFullscreen();
	}
	
	gameFrame.focus();
}

function fullscreenAvailable() {
	var gameFrame = document.getElementById('game-frame');
	var isAvailable = gameFrame.webkitRequestFullscreen || gameFrame.mozRequestFullscreen || gameFrame.msRequestFullscreen;
	
	return isAvailable;
}

function isAndroid() {
	var ua = navigator.userAgent.toLowerCase();
	
	return ua.indexOf("android") > -1;
}

$(document).on('webkitfullscreenchange mozfullscreenchange fullscreenchange', function() {	
	var gameFrame = document.getElementById('game-frame');
	gameFrame.contentDocument.location.reload(true);
});