#include <stdio.h>
/**
 * main - prints the alphabet with  putchar
 * Return: int 0
*/
int main(void)
{
	char m;

	for (m = 'a'; m <= 'z'; m++)
		putchar(m);
	for (m = 'A'; m <= 'Z'; m++)
	putchar('\n');
	return (0);
}
