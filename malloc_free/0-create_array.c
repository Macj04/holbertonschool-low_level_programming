#include "main.h"
/**
 * *create_array - creates an array initializes with a specific char
 * @size:size
 * @c:character
 * Return: Always 0
 */
char *create_array(unsigned int size, char c)
{
	char *ray;
	unsigned int m;

	if (size == 0)
	{
		return (NULL);
	}
	ray = malloc(size * sizeof(char));

	if (ray == NULL)
	{
		return (NULL);
	}
	for (m = 0; m < size; m++)
	{
		ray[m] = c;
	}
	return (ray);
}
