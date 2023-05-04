#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 *
 * Return: converted number, string b that is not 0 or 1 or b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int nm = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		nm <<= 1;
		nm += b[i] - '0';
	}

	return (nm);
}
