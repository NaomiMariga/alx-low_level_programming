#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * rev_string - reverse a string
 *
 * @s: string to reversed
 */
void rev_string(char *s)
{
	int index;
	char letter;

	for (index = (strlen(s) - 1); index >= 0; index--)
	{
		letter = s[index];
		putchar(letter);
	}
	putchar('\n');
}
