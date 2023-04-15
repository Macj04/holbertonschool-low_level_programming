#include "variadic_functions.h"
/**
 * print_all - function that print anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	char *s;
	unsigned int m;
	va_list pr;

	m = 0;
	va_start(pr, format);
	while (format != NULL && format[m])
	{
		switch (format[m])
		{
			case 'c':
				printf("%c", va_arg(pr, int));
				break;
			case 'i':
				printf("%d", va_arg(pr, int));
				break;
			case 'f':
				printf("%f", va_arg(pr, double));
				break;
			case 's':
				s = va_arg(pr, char *);
				s ? printf("%s", s) : printf("(nil)");
				break;
		}
		if ((format[m] == 'f' || format[m] == 'i' || format[m] == 's' || format[m] == 'c') && format[m + 1])
			printf(", ");
		m++;
	}
	printf("\n");
	va_end(pr);
}
