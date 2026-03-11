#include "./Rect.h"

bool pointInRect(const Rect rect, const int x, const int y) {
	return (
		rect.x <= x &&
		x <= rect.x+rect.w &&
		rect.y <= y &&
		y <= rect.y+rect.h
		);
}
