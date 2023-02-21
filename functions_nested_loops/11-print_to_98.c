#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @m: number
 */
void print_to_98(int m)
{
	if (m <= 98)
	{
		while (m < 98)
		{
			printf("%d, ", m++);
		}
		printf("%d\n", m);
	}
	else if (m > 98)
	{
		while (m > 98)
		{
			printf("%d, ", m--);
		}
		printf("%d\n", m);
	}
}
