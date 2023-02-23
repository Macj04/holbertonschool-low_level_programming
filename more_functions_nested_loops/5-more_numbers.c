#include "main.h"
/**
 *more_numbers - print numbers from 0 to 14 10 times
 *Return: Always 0
*/
void more_numbers(void)
{
	int reps;
	int num;

	for (reps = 0; reps <= 9; reps++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
				_putchar(num / 10 + '0');
			}
			_putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}
