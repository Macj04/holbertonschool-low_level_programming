#include "main.h"
/**
 * print_chessboard - function that prints the chessboard
 * @a:array
 * Return: Always 0
 */
void print_chessboard(char (*a)[8])
{
	int m;
	int c;

	for (m = 0; m < 8; m++)
	{
		for (c = 0; c < 8; c++)
		{
			printf("%c", a[m][c]);
		}
		printf("\n");
	}
}
