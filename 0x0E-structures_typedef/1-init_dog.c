#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initialize a variable
 * @d: A pointer
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
