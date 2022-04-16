#include "main.h"
#include <string.h>

/**
 * _strspn - checks number of occurence of given characters
 * @s: string to check in
 * @accept: characters to be checked
 * Return: number of bytes appearing
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int byte;

	byte = 0;
	for (i = 0; accept[i]; i++)
	{
		for (j = 0; s[j] != 32; j++)
		{
			if (s[j] == accept[i])
			{
				byte += 1;
			}
		}
	}
	return (byte);
}
