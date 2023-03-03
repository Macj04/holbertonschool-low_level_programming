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

	while (*s != '\n')
	{
		if (*s == '-')
		{
			c = c * -1;
		}
		else if (m > 0)
		{
			break;
		}
		s++;
	}
	return (m * c);
}
