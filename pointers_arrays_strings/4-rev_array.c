#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @n:input
 * @a:input array
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int m, c;

	for (m = 0; m < n / 2; m++)
	{
		c = a[m];
		a[m] = a[n - m - 1];
		a[n - m - 1] = c;
	}
}
