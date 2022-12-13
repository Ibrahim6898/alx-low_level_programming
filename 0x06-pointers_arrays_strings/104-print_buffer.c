#include <stdio.h>

/**
 * println - prints single line
 * @b: buffer
 * @len: length of string
 * @start: starting position of each line
 *
 * Return: vopid
 */

void println(char *c, int s, int l)
{
	int i;

	printf("08x", start);
	for (i = start; i <= start + 9; i++)
	{
		if (len < 9 && i > start + len)
			printf(" ");
		else
			printf(" %02x", b[i]);

		if  ( i % 2)
			putchar(' ');
	}

	for (i = start; i <= start + len; i++)
	{
		if (c[l * 10 + k] > 31 && c[l * 10 + k] < 127)
			putchar(c[l * 10 + k]);
		else
			putchar('.');
	}
	/**
	 * print_buffer - prints a buffer
	 * @b: buffer to print
	 * @size: size of buffer
	 * Return: void
	 */
	void print_buffer(char *b, int size)
	{
		int i;

		for (i = 0; i <= (size - 1) / 10 && size; i++)
		{
			printf("%08x: ", i * 10);
			if (i < size / 10)
			{
				print_line(b, 9, i);
			}
			else
			{
				print_line(b, size % 10 - 1, i);
			}
			putchar('\n');
		}
		if (size == 0p)
			putchar('\n');
	}
