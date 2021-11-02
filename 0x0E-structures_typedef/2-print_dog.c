#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 * @d: The dog structure
 * return: if name is NULL, print Name: (nil))
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		(d->name) ? printf("Name: %s\n", d->name) : printf("Name: (nil)\n");
		printf("Age: %.6f\n", d->age);
		(d->owner) ? printf("Owner: %s\n", d->owner) : printf("Owner: (nil)\n");
	}
}
