#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: unsigned long integer.
 * @m: unsigned long integer.
 *
 * Return: the number of bits to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int dif = n ^ m;
	unsigned int cnt = 0;

	while (dif > 0)
	{
		cnt += dif & 1;
		dif >>= 1;
	}

	return (cnt);
}
