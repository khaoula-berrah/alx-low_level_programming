#include "main.h"
#include <string.h>

int check(char *s, int x, int len);
int len(char *s);

/**
 * check - check the string recusively
 * @s: input
 * @x: iterator
 * @len: length of string
 * Return: 1 or 0
 */

int check(char *s, int x, int len)
{
	return (s[x] == s[len - x - 1]);
}

/**
 * len - returns the lent of a string
 * @s: input
 * Return: length of the string
 */

int len(char *s)
{
	return strlen(s);
}

/**
 * is_palindrome - check if a sting is palindrome
 * @s: string
 * Return: 1 or 0;
 */

int is_palindrome(char *s)
{
	int i;
	int length = len(s);

	for (i = 0; i < length / 2; i++)
	{
		if (!check(s, i, length))
		{
			return (0);
		}
	}
	return (1);
}
