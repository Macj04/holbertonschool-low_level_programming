#include "main.h"
/**
 * print_triangle - prints a triangle if size is 0 or less
 * @size:number
 * Return: Always 0
 */
void print_triangle(int size)
{
	int cos;
	int sen;

	if (size > 0)
	{
		for (cos = 1; cos <= size; cos++)
		{
			for (sen = 1; sen <= size; sen++)
			{
				if (sen != size && sen <= size - cos)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
