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
		if (!d->name)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (!d->owner)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
