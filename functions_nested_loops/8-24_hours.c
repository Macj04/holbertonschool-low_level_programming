#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 * Return: Always 0
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar(hour / 10 + '0');
			_putchar(hour % 10 + '0');
			write(1, ":", 1);
			_putchar(minute / 10 + '0');
			_putchar(minute % 10 + '0');
			write(1, "\n", 1);
		}
	}
}
