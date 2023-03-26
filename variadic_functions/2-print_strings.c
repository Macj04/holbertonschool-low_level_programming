#include "variadic_functions.h"
/**
 * print_string - function that print strings
 * @separator:pointer
 * @n:variable number
 * Return:void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *m;
	unsigned int c;
	va_list prm;

	va_start(prm, n);

	for (c = 0; c < n; c++)
	{
		m = va_arg(prm, char *);

		if (separator != NULL)
		{
			if (m)
				printf("%s", m);
			else
				printf("(nil)");
			if (c < n - 1)
				printf("%s", separator);
		}
		else
			printf("%s", m);
	}
	printf("\n");
	va_end(prm);
}
