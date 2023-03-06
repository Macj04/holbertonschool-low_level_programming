#include "main.h"
/**
 * _puts_recursion - print a string
 * @s:string
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /*end of the string*/
	{
		putchar('\n');
		return;
	}
	putchar(*s); /*print the current character*/
	_puts_recursion(s + 1); /*recursively print rest of sring*/
}
