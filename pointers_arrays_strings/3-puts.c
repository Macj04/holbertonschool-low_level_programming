#include "main.h"
/**
 * _puts - prints a string followed by a new line
 * @str:string
 * Return: Always 0
 */
void _puts(char *str)
{
	int m = 0;

	while (*str != '\0')
	{
		m++;
		str++;
	}
	_putchar('\n');
}
