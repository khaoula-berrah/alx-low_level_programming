#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *Explain: 'hexadecimal'
 *Return: Always 0 (Success)
 */
int main(void)
{
	int k;
	int s;

	for (k = 48; k <= 57; k++)
	{
		putchar(k);
	}
	for (s = 97; s <= 102; s++)
	{
		putchar(s);
	}
	putchar('\n');
	return (0);
}
