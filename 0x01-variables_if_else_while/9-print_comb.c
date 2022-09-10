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

	for (c = 0; c <= 9; c++)
	{
		putchar((c % 10) + '0');
		if (c == '9')
			break;;
		putchar(',');
		putchar(' ');
		}
	putchar('\n');
	return (0);
}
