#include "main.h"
#include <string.h>
/**
 * puts_half - prints last half of the string
 *
 * @str: string to be printed
 */
void puts_half(char *str)
{
	unsigned long int index;
	char letter;
	unsigned long int length = strlen(str);
	int half;

	if (length % 2 == 0)
	{
		half = length / 2;
		for (index = half; index < length; index++)
		{
			letter = str[index];
			_putchar(letter);
		}
		_putchar('\n');
	}
	else
	{
		half = ((length - 1) / 2);

		for (index = half + 1; index < length; index++)
		{
			letter = str[index];
			_putchar(letter);
		}
		_putchar('\n');
	}
}
