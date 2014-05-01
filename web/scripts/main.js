$(document).ready(function() {
	console.log("try to get: " + PLAY_STATE_PATH);

	document.title = EXAMPLE_NAME + " - " + document.title;
	
	$("#example-title").text(EXAMPLE_NAME);
	$("#example-notes").text(EXAMPLE_NOTES);
	
	$("#back-text").text("\"" + BACK_TEXT + "\"");
	$("#back-link").attr("href", BACK_LINK);
	
	$.get(PLAY_STATE_PATH, function(data) {
		$("#code-example").html(data);
		
		sh_highlightDocument();
	});
	
});