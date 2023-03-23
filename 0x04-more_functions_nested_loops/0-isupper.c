#include "main.h"
/**
 * _isupper - checks the uppercase or otherwise.
 *@c: input value
 * Return: Always 0.
 *
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
