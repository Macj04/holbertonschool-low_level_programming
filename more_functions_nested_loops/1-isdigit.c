#include "main.h"
/**
 * _isdigit - Checks for a digit and return 1 if c is a digit else 0
 * @c:digit
 * Return: 1 if c is a digit or 0 is otherwise
 */
int _isdigit(int c);
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
