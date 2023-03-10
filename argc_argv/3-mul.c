#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc:number
 * @argv:string
 * Return: Alwais 0
 */
int main(int argc, char *argv[])
{
	int num, num1, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	num1 = atoi(argv[2]);
	result = num * num1;

	printf("%d\n", result);

	return (0);
}
