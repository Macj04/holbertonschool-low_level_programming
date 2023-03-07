#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1:string1
 * @s2:string2
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
	int m;

	for (m = 0; s1[m] && s2[m]; m++)
	{
		if (s1[m] != s2[m])
			return (s1[m] - s2[m]);
	}
	return (0);
}
