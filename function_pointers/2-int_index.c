#include "function_pointers.h"
/**
 * int_index - fuction that searches for an integer
 * @array:pointer
 * @size:size of array
 * @cmp:function
 * Return: Always 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int m;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (m = 0; m < size; m++)
		{
			if (cmp(array[m]))
				return (m);
		}
	}
	return (-1);
}
