#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a program that prints single digits of base ten
 *
 * Return: return 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	printf("\n");
	return (0);
}
