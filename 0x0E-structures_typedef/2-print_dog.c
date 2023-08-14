#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Prints a struct dog
 * @d: Pointer used to access the fields of the struct
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
