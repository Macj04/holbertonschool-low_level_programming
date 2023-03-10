#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positivie numbers
 * @argc:number
 * @argv:string
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int add = 0;
	int m;
	int c;
	char *arg;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (m = 1; m < argc; m++)
	{
		arg = argv[m];
		for (c = 0; arg[c] != '\0'; c++)
		{
			if (arg[c] < '0' || arg[c] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(arg);
	}
	printf("%d\n", add);
	return (0);
}
