#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - reverse prints a string
 * @s: string to reverse print
 */
void _print_rev_recursion(char *s)
{
	_putchar(s[strlen(s)-1]);
	if (s[strlen(s) - 1] == '\n')
	{
		return;
	}                        
	s[strlen(s) - 1] = '\0';	
	_print_rev_recursion(s);                                                                           
}
