#include <stdio.h>
/**
 * main - fibonacci
 * Purpose - no hardcode
 * Return:  (Success)
 */
int main(void)
{
	unsigned long int a;
	unsigned long int bf = 1;
	unsigned long int ft = 2;
	unsigned long int l = 1000000000;
	unsigned long int bf1;
	unsigned long int bf2;
	unsigned long int ft1;
	unsigned long int ft2;

	printf("%lu", bf);

	for (a = 1; a < 91; a++)
	{
		printf(", %lu", ft);
		ft += bf;
		bf = ft - bf;
	}

	bf1 = (bf / l);
	bf2 = (bf % l);
	ft1 = (ft / l);
	ft2 = (ft % l);

	for (a = 92; a < 99; ++a)
	{
		printf(", %lu", ft1 + (ft2 / l));
		printf("%lu", ft2 % l);
		ft1 = ft1 + bf1;
		bf1 = ft1 - bf1;
		ft2 = ft2 + bf2;
		bf2 = ft2 - bf2;
	}
	printf("\n");

	return (0);
}
