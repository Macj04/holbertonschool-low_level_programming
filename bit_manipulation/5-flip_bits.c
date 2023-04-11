#include "main.h"
/**
 * flip_bits - return the number of bits from one number to another
 * @m:number
 * @n:number1
 * Return: count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int var = 0;
	int count = 0;

	var = m ^ n;

	while (var)
	{
		var = var & (var - 1);
		count++;
	}
	return (count);
}
