#include "variadic_functions.h"
/**
 * print_numbers - function that print numbers
 * @separator:pointer
 * @n:variables number
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int m;
	unsigned int num;
	va_list prm;

	va_start(prm, n);

	for (m = 0; m < n; m++)
	{
		num = va_arg(prm, int);
		if (separator != NULL)
		{
			printf("%d", num);
			if (m < n - 1)
				printf("%s", separator);
		}
		else
			printf("%d", num);
	}
	printf("\n");
	va_end(prm);
}
