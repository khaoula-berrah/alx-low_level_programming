#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int s;

	for (s = 0; s < n && src[s] != '\0'; s++)
	{
		dest[s] = src[s];
	}

	for (s = 0; s < n; s++)
	{
		dest[s] = '\0';
	}
	return (dest);
}
