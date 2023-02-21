#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @n: number used as input
 * Return: absolute value of number
 */
int _abs(int num)
{
	if (num < 0)
		num = (-1) * num;
	return (num);
}
