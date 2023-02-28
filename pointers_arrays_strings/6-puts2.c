#include "main.h"
/**
 * puts2 - print every other character starting with the first character
 * @str:string
 * Return: Always 0
 */
void puts2(char *str)
{
	int m;

	for (m = 0; str[m]; m++)
	{
		if (m % 2 == 0)
			_putchar(str[m]);
	}
	_putchar(10);
}
