#include "main.h"
/**
 * print_most_numbers - print the numbers from 0 to 9 but not print 2 and 4
 */
void print_most_numbers(void)
{
	char num = 48;

	while (num < 58)
	{
		(num == 50 || num == 52) && num++;
		write(1, &num, 1), num++;
	}
	_putchar(10);
}
