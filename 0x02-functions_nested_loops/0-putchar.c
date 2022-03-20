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
	printChars("_putchar");
	_putchar('\n');
	return (0);
}

/**
 * printChars - Loops through a string and prints each character
 *
 * Return: 0 on success
 *
 * @letters: string to be printed
 */
int printChars(char letters[])
{
	unsigned long int pos = 0;

	while (pos < strlen(letters))
	{
		char letter = letters[pos];

		_putchar(letter);
		pos++;
	}
	return (0);
}
