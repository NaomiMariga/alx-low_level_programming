#include <unistd.h>
#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * main - print _putchar
 *
 * Return: Always 0 on success
 */

int main(void)
{
	printChars();
	_putchar('\n');
	return (0);
}

int printChars(void)
{
	char letters[] = "_putchar";
	unsigned long int pos = 0;

	while (pos < strlen(letters))
	{
		char letter = letters[pos];

		_putchar(letter);
		pos++;
	}
	return (0);
}
