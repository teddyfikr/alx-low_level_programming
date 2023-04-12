#include "main.h"

/**
 * check_squ - checks for the square root
 * @i: integer number
 * @j: integer number
 * Return: int
 */
int check_squ(int i, int j)
{
if (i * i > j)
return (-1);
else if (i * i == j)
return (i);
else
return (check_squ(i + 1, j));
}
/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n: integer
 * Return: squareroot or -1
 */
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
return (check_squ(1, n));
}
