#include "main.h"
/**
 * prints_last_number - print the last digit of a number
 * @num: number
 * Return: The last digit
 */
int print_last_digit(int n)
{
	int digit = 0;

	if (n < 0)
		digit = (n % 10) * -1;
	else
		digit = n % 10;
	_putchar(digit + '0');
	return (digit);
}
