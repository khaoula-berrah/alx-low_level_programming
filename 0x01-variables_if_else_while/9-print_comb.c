#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *Explain: 'Patience persistence'
 *Return: Always 0 (Success)
 */
int main(void)
{
	int f;

	for (f = 48; f <= 57; f++)
	{
		putchar(f);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
