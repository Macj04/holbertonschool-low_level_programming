#include "main.h"
/**
 * times_table - prints the 9 times table starting with 0
 * Return: Always 0
 */
void times_table(void)
{
	int s, x, y;

	for (s = 0; s < 10; s++)
	{
		for (x = 0; x < 10; x++)
		{
			y = s * x;
			if (y > 9)
			{
				_putchar(y / 10 + '0');
				_putchar(y % 10 + '0');
			}
			else if (x != 0)
			{
				_putchar(' ');
				_putchar(y % 10 + '0');
			}
			else
				_putchar(y % 10 + '0');
			if (x != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		write(1, "\n", 1);
	}
}
