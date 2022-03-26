#include "main.h"

/**
 * print_diagonal - print / diagonally
 * @n: times to print
 */
void print_diagonal(int n)
{
	int count;
	int space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (count = 0; count < n; count++)
	{
		for (space = 0; space < n; space++)
		{
			if (n > 0)
			{
				if (space == count)
				{
					_putchar('\\');
				}
				else if (space < count)
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
