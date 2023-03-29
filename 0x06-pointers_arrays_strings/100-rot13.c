#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
	char *p = s;

	while (*p)
	{
		if (isalpha(*p))
		{
			char base = isupper(*p) ? 'A' : 'a';
			*p = (((*p - base) + 13) % 26) + base;
		}
		p++;
	}
	return (s);
}
