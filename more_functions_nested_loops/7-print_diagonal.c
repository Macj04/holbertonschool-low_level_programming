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
		for (i = 0, i < m; i++)
		{
		_putchar(' ');
		}
	_putchar('\\');
	_putchar('\n');
		}
	}
}	
