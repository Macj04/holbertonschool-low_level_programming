#include "main.h"
/**
 * print_numbers - prints the numbers from 0 to 9
 */
void print_numbers(void)
{
	char num = 48;

	while (num < 58)
	{
		write(1, &num, 1), num++;
	}
	_putchar(10);
}
