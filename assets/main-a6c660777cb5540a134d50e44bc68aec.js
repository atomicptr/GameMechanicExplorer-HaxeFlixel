$(document).ready(function(){$("#btn-download-apk").hide();$.get("src/states/PlayState.hx",function(data){$("#code-example").html(data);sh_highlightDocument()});var width=$(".game-container iframe").width();width=Math.ceil(width/32)*32;var height=Math.ceil((width*0.4)/32)*32;$(".game-container iframe").width(width);$(".game-container iframe").height(height);if(width<600){$("#game-frame").width(1);$("#game-frame").height(1)}if(!fullscreenAvailable()){$("#btn-fullscreen").remove()}if(isAndroid()){$("#btn-download-apk").show()}});$(window).on("orientationchange",function(e){window.location.reload()});function gameframe_fullscreen(){var gameFrame=document.getElementById("game-frame");if(gameFrame.webkitRequestFullscreen){gameFrame.webkitRequestFullscreen()}else{if(gameFrame.mozRequestFullScreen){gameFrame.mozRequestFullScreen()}else{gameFrame.msRequestFullscreen()}}gameFrame.focus()}function fullscreenAvailable(){var gameFrame=document.getElementById("game-frame");var isAvailable=gameFrame.webkitRequestFullscreen||gameFrame.mozRequestFullScreen||gameFrame.msRequestFullscreen;return isAvailable}function isAndroid(){var ua=navigator.userAgent.toLowerCase();return ua.indexOf("android")>-1}$(document).on("webkitfullscreenchange mozfullscreenchange fullscreenchange",function(){var gameFrame=document.getElementById("game-frame");gameFrame.contentDocument.location.reload(true)});