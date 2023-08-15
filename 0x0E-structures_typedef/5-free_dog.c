#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees dogs
 * @d: Pointer that has access to the struct
 *
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
