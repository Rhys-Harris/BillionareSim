#include <stdio.h>

#include "./include/raylib.h"

#include "./config.h"
#include "./Game.h"
#include "./Rect.h"

void update(Game *game) {
	// Get mouse position
	const int mouseX = GetMouseX();
	const int mouseY = GetMouseY();

	// Manual income click logic
	if (pointInRect(MANUAL_BUTTON_RECT, mouseX, mouseY)) {
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
