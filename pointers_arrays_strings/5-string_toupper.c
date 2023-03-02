#include "main.h"
#include <ctype.h>
/**
 * *string_toupper - changes lowercase letter of a string to uppercase
 * @str:string
 * Return: Always 0
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (islower(*ptr))/**verify that all letter is lowercase*/
		{
			*ptr = toupper(*ptr);/**function that converter a uppercase*/
		}
		ptr++;
	}
	return (str);
}
