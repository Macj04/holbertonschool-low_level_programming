#include "main.h"
/**
 * *_strdup - return a pointer to a newly allocated space in memory
 * @str: string1
 * Return: Always 0
 */
char *_strdup(char *str)
{
	char *str2;

	if (str == NULL)
	{
		return (NULL);
	}

	str2 = (char*)malloc(strlen(str) + 1);
	if (str2 == NULL)
	{
		return (NULL);
	}
	strcpy(str2, str);
	return (str2);
}
