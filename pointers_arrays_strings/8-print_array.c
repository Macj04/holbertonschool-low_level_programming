#include "main.h"
/**
 * print_array - print n elements of an array of integers
 * @a:array
 * @n:number
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int m;

	for (m = 0; m <= n - 1; m++)
	{
		printf("%d", a[m]);
		if (m != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
