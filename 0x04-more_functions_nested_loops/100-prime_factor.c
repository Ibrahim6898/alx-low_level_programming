#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0;
 */

int main(void)
{
	unsigned long n = 612852475143;
	unsigned long div = 2, ans = 0, maxFact;

	while (n != 0)
	{
		if (n % div != 0)
		{
			div += 1;
		}
		else
		{
			maxFact = n;
			n /= div;
		}
		if (n == 1)
		{
			printf("%ld is the largest prime factor!", maxFact);
			ans = 1;
			break;
		}
	}
	return (0);
}
