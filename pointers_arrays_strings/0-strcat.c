#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest:output
 * @src:input
 * Return:dest
 */
char *_strcat(char *dest, char *src)
{
	int m;
	int c;

	for (m = 0; dest[m]; m++)
	{
	}
	for (c = 0; src[c]; c++)
	{
		dest[m] = src[c];
		m++;
	}
	return (dest);
}
