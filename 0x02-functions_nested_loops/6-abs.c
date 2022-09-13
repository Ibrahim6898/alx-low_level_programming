#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer
 * @c: number input
 * Return: 0
 */

int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
	return (c * -1);
}
