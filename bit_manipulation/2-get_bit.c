#include "main.h"
/**
 * get_bit - return the value of a bit at a given index
 * @index:index
 * @n:number
 * Return: 1, 0 or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	/**if the index is within bounds, creates a mask by shifting the number*/
	/**1 to theleft by index bits8*/
	mask = 1UL << index;
	return (n & mask) != 0;
}
