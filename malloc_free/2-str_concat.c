#include "main.h"
/**
 * *str_concat - functions that concatenates two strings
 * @s1:string1
 * @s2:string2
 * Return: Always 0
 */
char *str_concat(char *s1, char *s2)
{
	char *newstr;

	/*using strlen calculate the length of s1 and s2*/
	size_t s1_len = strlen(s1);
	size_t s2_len = strlen(s2);

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	newstr = (char *)malloc(s1_len + s2_len + 1);/*allocate memory*/

	if (newstr == NULL)
	{
		return (NULL);
	}

	/*copy the contents in the allocated memory*/
	memcpy(newstr, s1, s1_len);
	memcpy(newstr + s1_len, s2, s2_len + 1);

	return (newstr);
}
