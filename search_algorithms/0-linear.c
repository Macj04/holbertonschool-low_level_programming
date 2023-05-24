#include "search_algos.h"

/**
 * linear_search - this function searches for a value in an array of integers
 * using the linear search algorithm
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for.
 * Return: The index of the value if found, or -1
 */

int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (!array)
		return (-1);

	while (i < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);

		i++;
	}

	return (-1);
}
