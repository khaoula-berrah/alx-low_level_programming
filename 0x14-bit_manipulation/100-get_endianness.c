#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_endianness - checks the endianness of the system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int m = 1;
	char *k = (char *)&m;

	return ((int)*k);
}
