#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - function that print a struct dog
 * @d:ptr input
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (!d->owner)
			printf("owner: (nil)\n");
		else
			printf("owner: %s\n", d->owner);
		if (!d->name)
			printf("name: (nil)\n");
		else
			printf("name: %s\n", d->name);
		printf("age: %f\n", d->age);
	}
}
