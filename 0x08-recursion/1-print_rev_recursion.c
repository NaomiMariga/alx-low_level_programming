#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - reverse prints a string
 * @s: string to reverse print
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
