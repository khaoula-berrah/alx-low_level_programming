#include <stdlib.h>
#include "main.h"

/**
  * array_range - creates an array of integers
  * @min: minimum range of values stored
  * @max: maximum range of values stored and number of elements
  * Return: pointer to the new array
  */

int *array_range(int min, int max)
{
	int i;
	int *arry;

	if (min > max)
	{
		return (NULL);
	}
	arry = malloc(sizeof(int) * (max - min + 1));

	if (arry == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= max - min; i++)
	{
		arry[i] = min + i;
	}

	return (arry);
}
