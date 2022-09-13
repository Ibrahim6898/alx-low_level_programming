#include "main.h"
/**
 * print_alphabet_x10 - function that prints 10x the alphabets
 *
 * Return 0
 */

void print_alphabet_x10(void)
{
	char n, coo;

	coo = 0;

	while (coo < 10)
	{
	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	coo++;
	_putchar('\n');
}
}
