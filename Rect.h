#ifndef _RECT_H_
#define _RECT_H_

#include <stdbool.h>

typedef struct Rect {
	int x, y, w, h;
} Rect;

bool pointInRect(const Rect rect, const int x, const int y);

#endif
