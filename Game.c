#include "./Game.h"
#include <string.h>

// Sets every value in the game to 0
void gameReset(Game *game) {
	memset(game, 0, sizeof(Game));
}
