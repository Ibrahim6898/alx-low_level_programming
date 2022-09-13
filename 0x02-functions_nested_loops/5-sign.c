#include "main.h"
/**
 * print_sign - a function that prints the sign of a number n
 * @n: number input
 * Return: Returns 1 and prints + if n is greater than zero
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	else
	{
		_putchar ('0');
		return (0);
	}
}
