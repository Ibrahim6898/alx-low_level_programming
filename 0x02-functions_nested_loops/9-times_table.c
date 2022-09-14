#include "main.h"
/**
 * times_table - a functuon that peints the 9times table
 *
 * Return: times table
 */
void times_tables(void)
{
	int h = 0;
	int m = 0;
	int h_r;
	int m_r;

	while (h <= 23)
	{
		while (m <= 59)
		{
			m_r = m % 10;
			h_r = h % 10;
			_putchar(h / 10 + '0');
			_putchar(h_r + '0');
			_putchar(',');
			_putchar(m / 10 + '0');
			_putchar(m_r + '0');
			m++;
			_putchar('\n');
			}
			h++;
			m = 0;
			}
			}
