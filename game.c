#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "stringops.h"
#include "point.h"

#define MAX_BUFFER_SIZE 1000

int getline(char *s, int limit);

int main(int arc, char *argv[])
{
	point_t *player_position = malloc(sizeof(player_position));
	point_t *treasure_position = malloc(sizeof(treasure_position));
	
	srand(time(NULL));

	player_position->x = rand() % 10;
	player_position->y = rand() % 10;	
	
	treasure_position->x = rand() % 10;
	treasure_position->y = rand() % 10;

	char input[MAX_BUFFER_SIZE];

	while(1)
	{
		printf("You are %.5f meters away from the treasure! Keep looking!\n", distance(player_position, treasure_position));

		while(1)
		{
			printf("Would you like to go north, south, east, or west?\n");
			getline(input, MAX_BUFFER_SIZE);
			trim(input);
			to_lower(input);

			if(!strcmp(input, "north"))
			{
				player_position->y--;
			}

			else if(!strcmp(input, "south"))
			{
				player_position->y++;
			}

			else if(!strcmp(input, "west"))
			{
				player_position->x--;
			}

			else if(!strcmp(input, "east"))
			{
				player_position->x++;
			}

			else
			{
				
				continue;
			}

			printf("You decided to go %s!\n\n", input);	
			break;
		}


		if(point_equal(player_position, treasure_position))
			break;

	}

	printf("You found the treasure! Congratulations!");

	free(player_position);
	free(treasure_position);	

	return 0;
}

int getline(char *s, int limit)
{
	int c;
       	char *t = s;
	while(--limit && (c = getchar()) != EOF && c != '\n')
		*t++ = c;
	if(c == '\n')
		*t++ = c;

	*t = '\0';

	return s - t;	
}
