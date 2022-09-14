#include "main.h"
/**
 * print_times_table - function that prints the n times table starting with 0
 * @n: input of table n
 * Return: nothing
 */
void print_times_table(int n)
{
	int row, col;
	int mul = 0;

	if (n <= 15 && n >= 0)
	{
		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				mul = (row * col);
				if ( mul < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(mul + '0');
			}
			else if (mul < 100)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((mul / 100) + '0');
				_putchar(((mul % 100) / 10) + '0');
				_putchar((mul % 10) + '0');
			}
			if (col != n)
				_putchar(',');
		}
		_putchar('\n');
	}

}
