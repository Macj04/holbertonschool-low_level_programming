#include "main.h"
/**
 * *malloc_checked - allocates memory using malloc
 * @b:input
 * Return: Always 0
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (!ptr)
	{
		exit(98);
	}
	return (ptr);
}
