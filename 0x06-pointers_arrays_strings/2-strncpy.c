#include "main.h"
#include <string.h>

/**
 * _strncpy -copies a strings
 * @dest: to be copied to
 * @src: to be copied
 * @n: stopping point
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char letter;
	int index;

	for (index = 0; index < n; index++)
	{
		letter = src[index];
		dest[index] = letter;
	}
	for (index = n; strlen(dest) > strlen(src) && index > n; index++)
	{
		dest[index] = 0;
	}
	return (dest);
}
