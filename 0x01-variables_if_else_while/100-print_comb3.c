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

	for (c1 = 0; c1 <= 89; c1++)
	{
		for (c2 = 0; c2 <= 89; c2++)
		{
			putchar(c1);
			putchar(c2);
			if (c1 != 89 || c2 != 89)
			{
			putchar(',');
			putchar(' ');
		}
		}
	}
		putchar('\n');
		return (0);
}
