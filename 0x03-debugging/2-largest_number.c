#include "main.h"

/**
 * largest_number - returnjs the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number.
 */

long largest_number(long a, long b, long c)
{
	int largest;

	if (a >= b && a >= c)
		largest = a;
	else if (b >= a && b >= c)
		largest = b;
	if (c >= a && c >= b)
		largest = c;
	return (largest);
}
