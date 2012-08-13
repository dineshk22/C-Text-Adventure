#ifndef POINT_H
#define POINT_H

typedef struct _point_t point_t;
struct _point_t {
	int x;
	int y;
};

double distance(point_t *point1, point_t *point2);
int point_equal(point_t *point1, point_t *point2);

#endif
