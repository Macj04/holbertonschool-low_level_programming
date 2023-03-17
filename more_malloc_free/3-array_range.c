#include "main.h"
/**
 * array_range - create an array of integers
 * @min:array min
 * @max:array max
 * Return: Always 0
 */
int *array_range(int min, int max)
{
	int *ray;
	int m;

	if (min > max)
	{
		return (NULL);
	}
	ray = malloc(sizeof(int) * (max - min + 1));
	if (ray == NULL)
	{
		return (NULL);
	}
	else
	{
		for (m = 0; m <= (max - min); m++)
		{
			ray[m] = min + m;
		}
	}
	return (ray);
}
