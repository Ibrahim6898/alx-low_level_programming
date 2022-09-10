#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: using main function
 * this program prints "All possible different combinations
 * Return 0
 */
int main(void)
{
	int c1, c2;

	for (c1 = 0; c1 <= 10; c1++)
	{
		for (c2 = 0; c2 <= 0; c2++)
		{
			putchar ((c1 % 10) + '0');
			putchar ((c2 % 10) + '0');
			if (c1 ==  9 && c2 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
		return (0);
}
