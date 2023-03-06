#include "main.h"
/**
 * print_diagsums - print the sum of the two diagonals
 * @a:string
 * @size:size
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int m;
	int d1 = 0;
	int d2 = 0;

	for (m = 0; m < size; m++)
	{
		d1 = d1 + a[m + (m * size)];
		d2 = d2 + a[(size * (m + 1)) - (m + 1)];
	}
	printf("%d, %d", d1, d2);
}
