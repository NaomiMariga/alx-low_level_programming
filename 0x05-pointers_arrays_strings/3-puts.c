#include "main.h"
/**
 * _puts - prints string
 *
 * @str: string to be printed
 */
void _puts(char *str)
{
	int index;
	char letter;

	for (index = 0; str[index] != '\0'; index++)
	{
		letter = str[index];
		_putchar(letter);
	}
}
