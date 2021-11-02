#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function that free a struct dog
 * @d: The dog structure
 * return: no return
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
