#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - prints half of string
 * @str:string
 * Return: Always 0
 */
void puts_half(char *str)
{
	int m = (_strlen(str) - 1) / 2 + 1;

	while (str[m])
	{
		_putchar(str[m]);
		m++;
	}
	_putchar('\n');
}
