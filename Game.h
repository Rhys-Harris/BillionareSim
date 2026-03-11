#ifndef _GAME_H_
#define _GAME_H_

#include "./Tower.h"

typedef struct Game {
	TowerMatrix towers;
	int money;
} Game;

void gameReset(Game *game);

#endif
