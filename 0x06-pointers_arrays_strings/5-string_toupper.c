#include "main.h"
#include <ctype.h>

/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer
 *
 * Return: n
 */

char *string_toupper(char *n)
{
	char *p = n;

	while (*p != '\0')
	{
		*p = toupper(*p);
		p++;
	}
	return (n);
}
