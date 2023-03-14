#include "main.h"
/**
 * **alloc_grid - return a pointer to a 2 dimensional array
 * @width:widht
 * @height:height
 * Return: Always 0
 */
int **alloc_grid(int width, int height)
{
	int **grd;
	int m;
	int c;

	/*chek invalid input*/
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/*asigned allocate memory*/
	grd = malloc(height * sizeof(int *));
	if (grd == NULL)
	{
		return (NULL);
	}
	for (m = 0; m < height; m++)
	{
		grd[m] = malloc(width * sizeof(int));
		if (grd[m] == NULL)
		{
			for (c = 0; c < m; c++)
			{
				free(grd[c]);
			}
			free(grd);
			return (NULL);
		}
		/*initialize each element to 0*/
		for (c = 0; c < width; c++)
		{
			grd[m][c] = 0;
		}
	}
	return (grd);
}
