#include "3-calc.h"
/**
 * main - main function
 * @argc:save the memory address
 * @argv:pointer - pointer
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (((*argv[2] == '/') || (*argv[2] == '%')) && (atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}
	if ((*(get_op_func(argv[2]))) && (strlen(argv[2]) == 1))
	{
		result = (*(get_op_func(argv[2])))(atoi(argv[1]), atoi(argv[3]));
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		exit(99);
	}
	return (0);
}
