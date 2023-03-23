#include "main.h"
/**
 * _isdigit -function that checks for a digit (0 through 9).
 *@c: input digit
 * Return: returns 1 if the digit is b/n 0-9 else zero
 */
int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
