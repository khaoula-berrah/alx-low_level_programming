#include "main.h"

/**
 * _atoi - convert a string into an integer.
 *
 * @s: the string to use.
 *
 * Return: integer.
 */

int _atoi(char *s)
{
	int result = 0;
	int sig = 1;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sig = -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0');
		}
		else
		{
			break;
		}
		s++;
	}
	return (sig * result);
}
