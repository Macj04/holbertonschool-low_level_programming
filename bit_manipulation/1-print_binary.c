#include "main.h"
/**
 * print_binary - print the binary representation of a number
 * @n:number
 * Return: void
 */

#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + 48);
}
