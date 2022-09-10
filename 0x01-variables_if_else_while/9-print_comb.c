#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: using the main function
 * this program prints "0, 1, 2, 3, 4, 5, 6, 7, 8, 9"
 * Return: 0
 */

int main(void)
{
	int c = 0;

	for (c = 0; c <= 9; c++)
	{
		putchar(c);
		if (c != '9')
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
