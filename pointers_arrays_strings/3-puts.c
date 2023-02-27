#include "main.h"
/**
 * _puts - prints a string followed by a new line
 * @str:string
 * Return: Always 0
 */
void _puts(char *str)
{
	int m;

	for (m = 0; str[m] != '\0'; ++m)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}
