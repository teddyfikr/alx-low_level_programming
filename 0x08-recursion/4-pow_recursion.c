#include "main.h"

/**
*_pow_recursion - the value of x raised to the power of y
*@x: base
*@y: power
*
*Return: power of a number
*/
int _pow_recursion(int x, int y)
{
	int p;

	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	p = (x * (_pow_recursion(x, y - 1)));

	return (p);

}
