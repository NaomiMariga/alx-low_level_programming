#include "main.h"
#include <string.h>

/**
 * _strpbrk - checks number of occurence of given characters
 * @s: string to check in
 * @accept: characters to be checked
 * Return: pointer to first occurrence
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	char *byte;
	char *null = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				byte = (s + i);
				return (byte);
			}
		}
	}
	return (null);
}
