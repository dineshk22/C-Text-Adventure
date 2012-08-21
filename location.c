#include <assert.h>
#include <stdlib.h>
#include <string.h>

#include "location.h"
#include "point.h"


struct _location_t {
	point_t *position;
	char *description;
};


location_t * location_alloc(point_t *position, char *description)
{
	assert(position != NULL && description != NULL);

	location_t *loc = malloc(sizeof(loc));

	loc->position = malloc(sizeof(loc->position));
	loc->description = strdup(description);

	return loc;
}

void location_free(location_t *location)
{
	free(location->description);	
	free(location);	
}


const char * location_get_description(location_t *location)
{
	assert(location != NULL);
	return location->description;
}

point_t * location_get_position(location_t *location)
{
	assert(location != NULL);
	return location.position;
}
