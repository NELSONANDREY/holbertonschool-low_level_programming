#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 * @d: The dog structure
 * return: If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
 */

void print_dog(struct dog *d)
{
	 if (d != NULL)
	 {
		(d->name) ? printf("Name: %s\n", d->name) : printf("Name: (nil)\n");
		printf("Age: %.6f\n", d->age);
		(d->owner) ? printf("owner: %s\n", d->owner) : printf("owner: (nil)\n");
	 }
}
