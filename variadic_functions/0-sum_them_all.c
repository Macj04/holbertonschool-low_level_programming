#include "variadic_functions.h"
/**
 * sum_them_all - return the sum of all its parameters
 * @n:int number
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int value;
	unsigned int m;
	va_list prm;

	va_start(prm, n);
	if (n == 0)
	{
		return (0);
	}
	for (m = 0; m < n; m++)
	{
		value = va_arg(prm, int);
		sum += value;
	}
	va_end(prm);
	return (sum);
}
