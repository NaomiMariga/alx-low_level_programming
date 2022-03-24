#include "main.h"
#include <string.h>

/**
 * _strncat - joins two strings
 * @dest: to be joined to
 * @src: to be appended
 * @n: stopping point
 * Return: joined string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr;
	char letter;
	int index;
	unsigned long int dest_len;

	dest_len = strlen(dest);
	for (index = 0; index < n; index++)
	{
		letter = src[index];
		dest[dest_len] = letter;
		dest_len++;
	}
	ptr = dest;
	return (ptr);
}
