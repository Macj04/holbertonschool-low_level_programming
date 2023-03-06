#include "main.h"
/**
 * _sqrt_recursion - return the natural square root of a number
 * @n:number
 * Return: Always 0
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (_sqrt(1, n));
	}
}

/**
 * _sqrt - calculate the square of root
 * @m:root
 * @c:num
 * Return: Always 0
 */
int _sqrt(int m, int c)
{
	if ((m * m) == c)
	{
		return (m);
	}
	else if ((m * m) < c)
	{
		return (_sqrt(m + 1, c));
	}
	else
	{
		return (-1);
	}
}
