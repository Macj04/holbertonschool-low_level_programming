#include "main.h"
/**
 * is_prime_number - check if number is prime 
 * @n:input
 * Return: Always 0
 */
int is_prime_number(int n)
{
	int rst;

	if (n <= 1)
	{
		return (0);
	}
	return (rst = prime_number(n, 2));
}

/**
 * prime_number - entry that is a prime number
 * @m:prime
 * @c:num
 * Return: Always 0
 */
int prime_number(int m, int c)
{
	if (m % c == c)
	{
		return(0);
	}
	else if (m == c)
	{
		return (1);
}
	else
	{
		return (prime_number(m, c + 1));
	}
	return (0);
}
