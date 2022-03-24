#include "main.h"
#include <string.h>

/**
 * _strcat - joins two strings
 * @dest: to be joined to
 * @src: to be appended
 * Return: joined string
 */

char *_strcat(char *dest, char *src)
{
	char *ptr;
	char letter;
	unsigned long int src_len;
	unsigned long int index;
	unsigned long int dest_len;

	src_len = strlen(src);
	dest_len = strlen(dest);
	for (index = 0; index <= src_len; index++)
	{
		letter = src[index];
		dest[dest_len] = letter;
		dest_len++;
	}
	ptr = dest;
	return (ptr);
}
