#include <stdio.h>

#include "./include/raylib.h"

#include "./config.h"
#include "./Game.h"

#define MANUAL_BUTTON_GAP 10
#define MANUAL_BUTTON_SIZE (LEFT_BAR_WIDTH-MANUAL_BUTTON_GAP*2)
#define MANUAL_BUTTON_Y 40
#define MANUAL_BUTTON_X MANUAL_BUTTON_GAP

void update(Game *game) {
	// Get mouse position
	const int mouseX = GetMouseX();
	const int mouseY = GetMouseY();

	// Manual income click logic
	if (
		MANUAL_BUTTON_X <= mouseX &&
		mouseX <= MANUAL_BUTTON_X+MANUAL_BUTTON_SIZE &&
		MANUAL_BUTTON_Y <= mouseY &&
		mouseY <= MANUAL_BUTTON_Y+MANUAL_BUTTON_SIZE
	) {
		// TODO: Get money
	}

	// TODO: Tower buy click
}

void draw(Game *game) {
	BeginDrawing();

	// TODO: Draw money
	// TODO: Draw manual income button
	// TODO: Draw tower buttons

	EndDrawing();
}

void tick(Game *game) {
	update(game);
	draw(game);
}

int main() {
	printf("Starting\n");

	SetTraceLogLevel(LOG_NONE);
	InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Billionare Simulator");

	Game game;

	gameReset(&game);

	while (!WindowShouldClose()) {
		tick(&game);
	}

	CloseWindow();

	printf("Finished\n");

	return 0;
}
