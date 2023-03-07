#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: a character
 * Return: 1 is alphabetic, 0 is not
 */
int _isalpha(int c)
{
	/*this function checks if c is lowercase or not an prints 1 or 0*/
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
