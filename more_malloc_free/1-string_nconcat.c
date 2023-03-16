#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1:string 1
 * @s2:string 2
 * Return: Always 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t s1_len;
	size_t s2_len = strlen(s2);
	char *result;

	/*if any string is NULL, an empty string*/
	if (s1 == NULL)
		s1 = "";

	s1_len = strlen(s1);/*get the length of the string with strlen function*/

	/*set to n the length of s2 for no exceed the allocated memory*/
	if (n >= s2_len)
	{
		n = s2_len;
	}

	/*allocate the necessary memory with malloc*/
	result = malloc(sizeof(char) * (s1_len + n + 1));

	if (result == NULL)
	{
		return (NULL);
	}

	/*copy the content of s1 and the first n bytes of s2*/
	strncpy(result, s1, s1_len);
	strncpy(result + s1_len, s2, n);

	/*add a null terminator*/
	result[s1_len + n] = '\0';

	return (result);
}
