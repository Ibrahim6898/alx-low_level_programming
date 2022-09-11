#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: using the main function
 * this program prints "Programming is positivw, zero or negative
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
	putchar(c);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);
}
