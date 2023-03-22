#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 *
 * @c: returns an abs
 *
 * Return: return abs
 */
int _abs(int c)
{
	if (c > 0)
	{
		return (c);
	}
	else if (c < 0)
	{
		int val;

		val = c * (-1);
		return (val);
	}
	else
	{
		return (0);
	}
}
