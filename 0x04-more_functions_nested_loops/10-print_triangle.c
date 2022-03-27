#include "main.h"
/**
 * print_triangle - priants a triangle
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int count;
	int hash;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (count = 1; count <= size; count++)
	{
		for (hash = count; hash < size; hash++)
		{
			_putchar(' ');
		}
		for (hash = 1; hash <= count; hash++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
