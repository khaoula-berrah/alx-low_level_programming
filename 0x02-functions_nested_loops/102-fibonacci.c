#include <stdio.h>
/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 * separated by a comma followed by a space.
 * Return: Always 0.
 */
int main(void)
{
	int a = 0;
	long l = 1, g = 2;

	while (a < 50)
	{
		if (a == 0)
			printf("%ld", l);
		else if (a == 1)
			printf(", %ld", g);
		else
		{
			g += l;
			l = g - l;
			printf(", %ld", g);
		}
		++a;
	}
}
