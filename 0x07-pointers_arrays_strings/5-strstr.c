#include "main.h"

/**
  * _strstr - Entry point
  * @haystack: input
  * @needle: input
  * Return: Always 0 (Success);
  */

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

	while (*n != '\0' && *h == *n)
	{
		h++;
		n++;
	}

	if (*n == '\0')
	{
		return (haystack);
	}
	haystack++;
	}

	return (0);
}
