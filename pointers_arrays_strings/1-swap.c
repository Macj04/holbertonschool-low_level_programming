#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a:number 1
 * @b:number 2
 * Return: Aways 0
 */
void swap_int(int *a, int *b)
{
	int swaps = *a;

	*a = *b;
	*b = swaps;
}
