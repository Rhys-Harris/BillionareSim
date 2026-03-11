#include <stdio.h>

#include "./include/raylib.h"

#include "./config.h"
#include "./Game.h"

void update(Game *game) {

}

void draw(Game *game) {
	BeginDrawing();
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

	return 0;
}
