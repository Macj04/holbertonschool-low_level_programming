#include "main.h"
/**
 * prints_last_number - print the last digit of a number
 * @num: number
 * Return: The last number
 */
int print_last_digit(int number)
{
    int last_number = number % 10;

    number > 10 ? last_number : (last_number = -last_number);
    _putchar(last_number + '0');
    return last_number;
}
