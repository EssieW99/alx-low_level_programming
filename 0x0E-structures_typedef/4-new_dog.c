#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Creates a new dog
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 *
 * Return: Is 0 or value of ptr
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	unsigned int len1, len2;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		return (NULL);
	}

	len1 = strlen(name);
	len2 = strlen(owner);

	ptr->name = malloc(len1 + 1);

	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->owner = malloc(len2 + 1);

	if (ptr->owner == NULL)
	{
		free(ptr);
		free(ptr->name);
		return (NULL);
	}

	strcpy(ptr->name, name);
	ptr->age = age;
	strcpy(ptr->owner, owner);

	return (ptr);
}
