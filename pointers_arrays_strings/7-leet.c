#include "main.h"
/**
 * *leet - encodes a string into 1337
 * @s:string
 * Return: Always 0
 */
char *leet(char *s)
{
	int m;
	int c;
	int nro[] = {48, 48, 49, 49, 51, 51, 52, 52, 55, 55};
	int l[] = {65, 69, 76, 79, 84, 97, 101, 108, 111, 116};

	for (m = 0; l[m]; m++)
	{
		for (c = 0; s[c]; c++)
		{
			if (s[c] == l[m])
				s[c] = nro[m];
		}
	}
	return (s);
}

