#include <stdio.h>

#include "./include/raylib.h"

#include "./config.h"

void update() {

}

void draw() {
	BeginDrawing();
	EndDrawing();
}

void tick() {
	update();
	draw();
}

int main() {
	printf("Starting\n");

	SetTraceLogLevel(LOG_NONE);

	InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Billionare Simulator");

	while (!WindowShouldClose()) {
		tick();
	}

	CloseWindow();

	return 0;
}
