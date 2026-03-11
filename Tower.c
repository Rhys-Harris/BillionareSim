#include "./config.h"

#include "./Tower.h"

int towerPrices[TOWER_LEVELS][TOWER_STAGES] = {
	{10},
	{500}
};

char *towerNames[TOWER_LEVELS][TOWER_STAGES] = {
	{"Checkout Employee"},
	{"Car Salesman"}
};

void getHitTowerFromMousePos(int mouseX, int mouseY, int *towerX, int *towerY) {

}

void buyTower(int towerLevel, int towerStage, int amount, int *money) {
	
}

void drawTowerButtons() {
	for (int level = 0; level < TOWER_LEVELS; ++level) {
		for (int stage = 0; stage < TOWER_STAGES; ++stage) {
			const int price = towerPrices[level][stage];
			const char *name = towerNames[level][stage];
			
			// TODO: Draw the button for this thing
		}
	}
}
