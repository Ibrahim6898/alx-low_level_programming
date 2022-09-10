#include <stdio.h>

/**
 * main - print if the number is positive, zero or negative.
 *
 * Description: This program  prints "all single digit 
 * numbers of base 10 start ing from 0," followed by a new line.
 * Retun: 0
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
	putchar(n);
	}
	putchar('\n');
	return (0);
}
