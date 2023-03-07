#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s:string
 * @accept:string2
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int m, c;
	unsigned int count = 0;
	int found;

	for (m = 0; s[m]; m++)
	{
		found = 0;
		for (c = 0; accept[c]; c++)
		{
			if (s[m] == accept[c])
			{
				found = 1;
				break;
			}
		}
		if (!found)
		{
			break;
		}
		count++;
	}
	return (count);
}
