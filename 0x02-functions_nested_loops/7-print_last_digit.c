#include "main.h"

/**
 * print_last_digit - prints last digit
 *
 * @n: number to be checked
 *
 * Return: return last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	_putchar('0' + last_digit);
	return (last_digit);
}
