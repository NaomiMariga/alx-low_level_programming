#include "main.h"

/**
 * factorial - factorial of a number n
 * @n: integer
 * Return: factorial, -1 on error and 1 if 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
