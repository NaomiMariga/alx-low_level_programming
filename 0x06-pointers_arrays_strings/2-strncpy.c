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
	char *ptr;
	char letter;
	int index;

	memset(dest, '\0', sizeof(dest));
	for (index = 0; index < n; index++)
	{
		letter = src[index];
		dest[index] = letter;
	}
	ptr = dest;
	return (ptr);
}
