#include "main.h"
/**
 * _isupper - Checks for uppercase character and return 1 if c is uppercase else return 0
 * @m:digit
 * Return:1 is uppercase else 0
 */
int _isupper(int m)
{
	if (m >= 'A' && m <= 'Z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
