#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *Explain: 'prints the alphabet in lowercase'
 *Return: Always 0 (Success)
 */
int main(void)
{
	int s = 97;

	while (s <= 122)
	{
		if (s == 101 || s == 113)
		{
			s++;
			continue;
		}
		putchar(s);
		s++;
	}
	putchar('\n');

	return (0);
}
