#include "function_pointers.h"
/**
 * array_iterator - function that executes a function given as a parameter
 * @array:pointer
 * @size:size of array
 * @action:function
 * Return: Always 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t m;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (m = 0; m < size; m++)
			(*action)(array[m]);
	}
}
