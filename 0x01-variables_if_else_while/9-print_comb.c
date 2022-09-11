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
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		if (c != 57)
	{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
