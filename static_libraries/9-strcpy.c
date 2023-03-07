#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src
 * @dest:output
 * @src:input
 * Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
	int m;

	for (m = 0; src[m]; m++)
	{
		dest[m] = src[m];
	}
	dest[m] = '\0';
	return (dest);
}
