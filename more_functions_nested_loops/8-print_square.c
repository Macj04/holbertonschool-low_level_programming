#include "main.h"
/**
 * print_square - prints a square, followed by a new line
 * @size:size of the square
 * Return:void
 */
void print_square(int size)
{
	int m, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 0; m < size; m++)
		{
			for (c = 0; c < size; c++)
			{
				_putchar('#');
			}
			_putchar('\n')
		}
	}
}
