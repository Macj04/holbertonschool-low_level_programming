#include "main.h"
/**
 * *_strstr - function that locates a substring
 * @haystack:string
 * @needle:substring
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		char* m = haystack;
		char* c = needle;

	while (*c != '\0' && *m == *c)
	{
		m++;
		c++;
	}
	if (*c == '\0')
	{
		return (haystack);
	}
	haystack++;
	}
	return (NULL);
}

