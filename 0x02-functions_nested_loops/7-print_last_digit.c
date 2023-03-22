#include "main.h"

/**
 * print_last_digit- function that computes the last digit of a number.
 *
 * @a: the number in computation
 *
 * Return: returns the last digit of the given number
 */

int print_last_digit(int a)
{
	if (a < 0)
	a = a * (-1);
	_putchar('0' + (a % 10));
	return (a % 10);
}
