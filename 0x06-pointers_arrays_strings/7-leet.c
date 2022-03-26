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
	char letters[] = "AaEeOoTtLl";
	char numbers[] = "4433007711";
	unsigned long int i;

	for (index = 0; index < strlen(s); index++)
	{
		for (i = 0; i < strlen(letters); i++)
		{
			if (s[index] == letters[i])
			{
				s[index] = numbers[i];
			}
		}
	}
	return (s);
}
