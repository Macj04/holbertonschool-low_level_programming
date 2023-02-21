#include "main.h"
/**
 * prints_last_number - print the last digit of a number
 * @num: number
 * Return: The last number
 */
int print_last_digit(int number)
{
    int last_digit = number % 10;

    number > 10 ? last_digit : (last_digit = -last_digit);
    _putchar(last_digit + '0');
    return last_digit;
}
