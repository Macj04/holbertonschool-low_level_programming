#include "function_pointers.h"
/**
 * print_name - function that print a name
 * @name:pointer
 * @f:function
 * Return:Alwais 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		(*f)(name);
}
