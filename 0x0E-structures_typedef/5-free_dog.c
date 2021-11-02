#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function that free a struct dog
 * @d: The dog structure
 * return: if name is NULL, print Name: (nil))
 */
void free_dog(dog_t *d)
{
	free(p->name);
	free(p->owner);
	free(p);
}
