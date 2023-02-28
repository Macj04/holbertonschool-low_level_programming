#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of string
 * @str:string
 * Return: Always 0
 */
void puts_half(char *str)
{
	int m = strlen(str);
	int c = m / 2;

	if (m % 2 != 0)
	{
		c = (m - 1) / 2;
	}
	printf("%s\n", str + c);
	_putchar(10);
}
