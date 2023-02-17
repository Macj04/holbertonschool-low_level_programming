#include <stdio.h>
/**
 * main - prints all possible combination of single-digit numbers using putchar maximum four times
 * Return: 0 if success
 */
int main(void)
{
	int nro;

	for (nro = 0; nro <= 9; nro++)
	{
		putchar(nro + '0');
		if (nro != 9)
	}
	putchar('\n');
	return (0);
}
