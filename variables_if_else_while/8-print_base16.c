#include <stdio.h>
/**
 * main - prints all the numbers of base 16 with putchar
 * Return: 0 if success
 */
int main(void)
{
	char alph;
	int nro;

	for (alph = 'a'; alph <= 'f'; alph++)
		putchar(alph);

	for (nro = 0; nro < 10; nro++)
		putchar(nro + '0');
	putchar('\n');
	return (0);
}
