#include "main.h"

/**
 * print_square - prints a square
 * @size: side of square
 */

void print_square(int size)
{
	int count;
	int hash;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (count = 0; count < size; count++)
	{
		for (hash = 0; hash < size; hash++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
