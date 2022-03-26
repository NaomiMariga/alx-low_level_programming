#include "main.h"

/**
 * print_line - prints _ each time condition is true
 * @n: number of _ to be printed
 */

void print_line(int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
