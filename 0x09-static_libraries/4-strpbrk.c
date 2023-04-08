#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	char *pt;

	while (*s)
	{
		for (pt = accept; *pt; pt++)
		{
			if (*s == *pt)
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
