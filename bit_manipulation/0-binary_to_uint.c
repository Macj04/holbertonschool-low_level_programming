#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b:number
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int m = 0;
	unsigned int uint = 0;

	if (!b)
		return (0);

	for (m = 0; b[m]; m++)
	{
		if (b[m] != '1' && b[m] != '0')
			return (0);
		uint = uint << 1;
		uint = uint + b[m] - '0';
	}
	return (uint);
}
