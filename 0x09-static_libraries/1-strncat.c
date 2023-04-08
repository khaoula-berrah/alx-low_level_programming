#include "main.h"

/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest_star
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_star = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (dest_star);
}
