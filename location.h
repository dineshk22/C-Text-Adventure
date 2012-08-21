#ifndef LOCATION_H
#define LOCATION_H

#include "point.h"

typedef struct _location_t location_t;

location_t * location_alloc(point_t *position, char *description);
void location_free(location_t *location);

const char * location_get_description(location_t *location);
point_t * location_get_position(location_t *location);

#endif
