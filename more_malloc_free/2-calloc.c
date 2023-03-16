#include "main.h"
/*
 * *_calloc - allocate memory for an array using maloc
 * @nmemb:input
 * @size:input
 * Return: Always 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int length;

	while (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	if (!ptr)
	{
		return (NULL);
	}
	for (length = 0; length < (nmemb * size); length++)
	{
		ptr[length] = 0;
	}
	return (ptr);
}
