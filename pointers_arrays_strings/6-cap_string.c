#include "main.h"
/**
 * *cap_string - capitalizes all words of a string
 * @s:string
 * Return: Always 0
 */
char *cap_string(char *s)
{
	int m;
	int c;
	int se[] = {125, 123, 63, 59, 46, 44, 41, 40, 34, 33, 32, 10, 9};

	for (c = 0; se[c]; c++)
	{
		for (m = 0; s[m]; m++)
		{
			if (m == 0)
				if (s[m] >= 97 && s[m] <= 122)
					s[m] = s[m] - 32;
			if (s[m] == se[c])
			{
				if (s[m + 1] >= 97 && s[m + 1] <= 122)
					s[m + 1] = s[m + 1] - 32;
			}
		}
	}
	return (s);
}
