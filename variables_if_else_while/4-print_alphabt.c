#include <stdio.h>
/**
 * main - prints the alphabet except q and e with putchar
 * return: 0 if success
 */
int main(void)
{
	char m;

	for (m = 'a'; m <= 'z'; m++)
	{
		if (m != 'q' && m != 'e')
			putchar(m);
	}
	putchar('\n');
	return (0);
}
