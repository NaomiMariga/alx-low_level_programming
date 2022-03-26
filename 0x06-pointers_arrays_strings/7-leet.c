#include "main.h"
#include <string.h>

/**
 * leet - replace  some letters with numbers
 *@s: string to be manipulated
 * Return: manipulated string
 */
char *leet(char *s)
{
	unsigned long int index;
	char letter;

	for (index = 0; index < strlen(s) && s[index] != '\0'; index++)
	{
		letter = s[index];
		if (letter == 'a' || letter == 'A')
		{
			s[index] = '4';
		}
		else if (letter == 'e' || letter == 'E')
		{
			s[index] = '3';
		}
		else if (letter == 'o' || letter == 'O')
		{
			s[index] = '0';
		}
		else if (letter == 't' || letter == 'T')
		{
			s[index] = '7';
		}
		else if (letter == 'l' || letter == 'L')
		{
			s[index] = '1';
		}
	}
	return (s);
}
