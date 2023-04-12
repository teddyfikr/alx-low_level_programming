#include "main.h"

/**
  * checkprime - Funcrion that checks if number is prime number.
  * @i:- user input.
  * @j:- user input.
  * Return:- Always 0 (success).
  */


int checkprime(int i, int j)
{
	if (i < 2 || i % j == 0)
	{
		return (0);
	}
	else if (i == j)
	{
		return (1);
	}
	else if (i > j)
	{
		checkprime(i, j + 1);
	}
	return (1);
}

/**
  * is_prime_number - Function that check if number is prime.
  * @n:- user input.
  * Return:- Always 0 (success)
  */

int is_prime_number(int n)
{
	return (checkprime(n, 2));
}
