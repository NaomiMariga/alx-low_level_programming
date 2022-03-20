#include "main.h"

/**
 * print_sign - print signs if given conditions are met
 *
 * Return: 1 if true and 0 if false
 *
 * @n: value to be checked
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}


