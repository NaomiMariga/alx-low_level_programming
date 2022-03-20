#include "main.h"

/**
 * print_alphabet_x10 - prints a - z 10 times
 */
void print_alphabet_x10(void)
{
	char lower;
	int count;

	for (count = 0; count <= 10; count++)
	{
		for (lower = 'a'; lower <= 'z'; lower++)
		{
			_putchar(lower);
		}
	       _putchar('\n');
	}
}
