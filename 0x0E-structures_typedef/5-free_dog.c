#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory to be allocated for a struct dog
 * @g: struct dog to be free
 */
void free_dog(dog_t *g)
{
	if (g)
	{
		free(g->name);
		free(g->owner);
		free(g);
	}
}
