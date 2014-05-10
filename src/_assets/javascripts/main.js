$(document).ready(function() {
	PLAY_STATE_PATH = "src/states/PlayState.hx";

	console.log("try to get: " + PLAY_STATE_PATH);

	$.get(PLAY_STATE_PATH, function(data) {
		$("#code-example").html(data);

		sh_highlightDocument();
	});

});
