#include "main.h"
/**
 * *_memcpy - function that copies memory area
 * @dest:string
 * @src:otpout
 * @n:inpout
 * Return: Always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_ptr = dest;
	char *src_ptr = src;

	while (n--)
	{
		*dest_ptr++ = *src_ptr++;
	}
	return (dest);
}
