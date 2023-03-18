#include <stdio.h>
#ifndef __FILE__
#define __FILE__
#endif
/**
 * main - print the name of the file
 * Return: Always 0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
