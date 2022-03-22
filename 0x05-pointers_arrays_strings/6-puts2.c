#include "main.h"
#include <string.h>
/**
 * puts2 - prints half the string while skipping one
 *
 * @str: string to be printed
 */
void puts2(char *str)
{
	unsigned long int index;
	char letter;

	for (index = 0; index < strlen(str); index += 2)
	{
		letter = str[index];
		_putchar(letter);
	}
	_putchar('\n');
}
