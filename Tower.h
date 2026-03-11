#ifndef _TOWER_H_
#define _TOWER_H_

// Vertical
#define TOWER_LEVELS 2

// Horizontal
#define TOWER_STAGES 1

typedef struct TowerMatrix {
	unsigned int amounts[TOWER_LEVELS][TOWER_STAGES];
} TowerMatrix;

#endif
