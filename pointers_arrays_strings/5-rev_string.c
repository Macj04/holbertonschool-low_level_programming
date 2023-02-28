#include "main.h"
/**
 * rev_string - function that reverse a string
 * @s:string
 * Return: Always 0
 */
void rev_string(char *s)
{
	int m;
	int c;
	int str;

	for (m = 0; s[m]; m++)
	{
	}
	for (c = 0; c < m / 2; c++)
	{
		str = s[c];
		s[c] = s[m - c - 1];
		s[m - c - 1] = str;
	}
}
