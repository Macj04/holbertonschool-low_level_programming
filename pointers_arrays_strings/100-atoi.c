#include "main.h"
/**
 * _atoim - convert a string to an integer
 * @s:string
 * return: Always 0
 */
int _atoi(char *s)
{
	int m = 0;
	int c = 1;

	while (*s != '\n')/*loop until the end of the string is reached*/
	{
		if (*s == '-')
		{
			c = c * -1;
		}
		else if (*s >= 48 && *s <= 57)
		{
			m = m * 10 + (*s - '0');
		}
		else if (m > 0)
		{
			break;/*if end of number is reached*/
		}
		s++;
	}
	return (m * c);
}
