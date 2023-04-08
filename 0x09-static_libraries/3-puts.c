#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @s: string to print
 */
void _puts(char *s)
{
	int n;

	while (s[n] != '\0')
	{
		_putchar(s[n]);
		n++;
	}
	_putchar('\n');
}

