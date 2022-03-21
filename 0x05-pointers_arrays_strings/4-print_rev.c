#include <string.h>
#include "main.h"
/**
 * print_rev - reverse a string
 *
 * @s: string to reversed
 */
void print_rev(char *s)
{
	unsigned long int index;
	char letter;

	for (index = (strlen(s) - 1); index >= 0; index--)
	{
		letter = s[index];
		_putchar(letter);
	}
	_putchar('\n');
}
