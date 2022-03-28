#include "main.h"
#include <string.h>

/**
 * _strchr - gets first occurence of given character
 * @s: string to be iterated
 * @c: character to be searched for
 * Return: character first occurence or null
 */

char *_strchr(char *s, char c)
{
	unsigned long int i;

	for (i = 0; i < strlen(s); i++)
	{
		if (s[i] == c)
		{
			return ((s + i));
		}

	}
	return (NULL);
}
