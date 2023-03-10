#include <stdio.h>
/**
 * main - print all arguments it receives
 * @argc:number
 * @argv:string
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int m;

	for (m = 0; m < argc; m++)
	{
		printf("%s\n", argv[m]);
	}
	return (0);
}
