#include <math.h>
#include <stdlib.h>

#include "point.h"

double distance(point_t *point1, point_t *point2)
{
	return sqrt(abs(pow((point1->x - point2->x), 2) + pow((point1->y - point2->y), 2)));
}

int point_equal(point_t *point1, point_t *point2)
{
	return point1->x == point2->x && point1->y == point2->y;
}


