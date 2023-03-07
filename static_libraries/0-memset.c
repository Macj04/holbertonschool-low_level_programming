#include "main.h"
/**
 * *_memset - fills memory with a char
 * @s:string
 * @b:char
 * @n:number
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *p = (unsigned char *)s;

	while (n--)
	{
		*p++ = (unsigned char)b;
	}
	return (s);
}
