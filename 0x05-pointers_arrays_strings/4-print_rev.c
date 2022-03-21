#include <string.h>
#include "main.h"
/**
 * print_rev - reverse a string
 *
 * @s: string to reversed
 */
void print_rev(char *s)
{
	int index;
	char letter;

	for (index = -1; index < -(strlen(s)); index--)
	{
		letter = s[index];
		_putchar(letter);
	}
	_putchar('\n');
}
