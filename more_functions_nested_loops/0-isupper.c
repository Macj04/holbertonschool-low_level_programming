#include "main.h"
/**
 * _isupper - Checks for uppercase character and return 1 if c is uppercase else return 0
 * @c:digit
 * Return:1 is uppercase else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
