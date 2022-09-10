#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: using main function
 * this program prints "All possible different combinations of 2 digits
 * Return: 0
 */
int main(void)
{
	int c1, c2;

	for (c1 = 39; c1 <= 48; c1++)
	{
		for (c2 = 39; c2 <= 48; c2++)
		{
			putchar(c1);
			putchar(c2);
			if (c1 != 48 || c2 != 48)
			{
			putchar(',');
			putchar(' ');
		}
		}
	}
		putchar('\n');
		return (0);
}
