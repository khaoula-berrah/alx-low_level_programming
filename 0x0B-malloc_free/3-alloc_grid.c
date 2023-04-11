#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * alloc_grid - nested loop to make grid
  * @width: width input
  * @height: height input
  * Return: pointer to 2 dim. array
  */

int **alloc_grid(int width, int height)
{
	int **grd;
	int a, b;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grd = (int **) malloc(sizeof(int *) * height);

	if (grd == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		grd[a] = (int *) malloc(sizeof(int) * width);

		if (grd[a] == NULL)
		{
			for (b = 0; b < a; b++)
			{
				free(grd[b]);
			}
		free(grd);
		return (NULL);
		}

		for (b = 0; b < width; b++)
		{
			grd[a][b] = 0;
		}
	}

	return (grd);

}
