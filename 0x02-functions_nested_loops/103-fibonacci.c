#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int j, k, nt, sm;

	j = 1;
	k = 2;
	sm = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sm = sm + j;
		}
		nt = j + k;
		j = k;
		k = nt;
	}
	printf("%lu\n", sm);

	return (0);
}
