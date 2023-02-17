#include <stdio.h>
/**
 * main - prints the numbers of base 10 starting from 0
 * Return: 0 if success
 */
int main(void)
{
	int nro;

	for (nro = 0; nro < 10; nro++)
		printf("%d", nro);
	putchar('\n');
	return (0);
}
