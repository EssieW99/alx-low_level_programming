#ifndef DOG_HEADER_FILE
#define DOG_HEADER_FILE

/**
 * struct dog - Details about a dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dogs's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);

#endif
