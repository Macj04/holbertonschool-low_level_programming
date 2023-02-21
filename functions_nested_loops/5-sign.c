#include "main.h"
/**
 * print_sign - prints the sign of a number depending n
 * @n: number
 * Return: 1 is positive, -1 is negative or 0 is zero
 */
int print_sign(int n)
{
	if (n >= 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(n + '0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
