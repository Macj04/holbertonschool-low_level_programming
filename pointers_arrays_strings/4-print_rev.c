#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s:string
 * Return: Always 0
 */
void print_rev(char *s)
{
	int m;

	for (m = 0; s[m]; m++)
	{
	}
	for (m = (m - 1); s[m]; m--)
	{
		_putchar(s[m]);
	}
	_putchar('\n');
}
