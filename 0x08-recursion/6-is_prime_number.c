#include "main.h"

/**
 * check_prime - checks for prime number
 * @num: number to be tested
 * @div: divisor
 * Return: 1 if true and 0 if false
 */

int check_prime(int num, int div)
{
	if (num % div == 0 && num != div)
	{
		return (0);
	}
	else if (div == num)
	{
		return (1);
	}
	return (check_prime(num, div + 1));
}

/**
 * is_prime_number - checks number is divisible by 1 and itself
 * @n: int to be checked
 * Return: 1 if prime or 0 if not
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n < 2)
	{
		return (0);
	}

	return (check_prime(n, div));
}
