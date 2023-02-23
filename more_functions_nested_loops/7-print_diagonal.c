#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line
 * @n:number
 * Return:void
 */
void print_diagonal(int n)
{
	int m, c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 0; m < n; m++)
		{
			for (c = 0, c < m; c++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}	
