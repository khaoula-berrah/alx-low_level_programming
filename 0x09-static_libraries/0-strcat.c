#include "main.h"
#include "mystring.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 * @n: number of bytes to be changed
 * Return: void
 */

char *_strcat(char *dest, char *src, int n)
{
	int m, k;

	m = 0;

	while (dest[m] != '\0')
	{
		m++;
	}

	k = 0;
	while (src[k] != '\0' && k < n)
	{
		dest[m] = src[k];
		m++;
		k++;
	}
	dest[m] = '\0';

	return (dest);
}
