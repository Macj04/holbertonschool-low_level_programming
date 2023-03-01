#include "main.h"
/**
 * *_strncat - concatenates two strings with n bytes
 * @dest:output
 * @src:input
 * @n:number
 * Return:dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int m;
	int c;

	for (m = 0; dest[m] != '\0'; m++)
	{
	}
	for (c = 0; (src[c] != '\0' && c < n); m++, c++)
	{
		dest[m] = src[c];
	}
	return (dest);
}
