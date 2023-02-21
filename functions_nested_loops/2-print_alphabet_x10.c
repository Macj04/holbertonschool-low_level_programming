#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * Return: Always 0
*/
void print_alphabet_x10(void)
{
	int num;
	int alph;

	for (num = 0; num <= 9; num++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
			_putchar(alph);
		_putchar('\n');
	}
}
