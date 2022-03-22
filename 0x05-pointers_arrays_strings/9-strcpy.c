#include "main.h"
#include <string.h>

/**
 * _strcpy - copies src to dest
 *
 * @dest: copy to
 *
 * @src: copy from
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr;
	unsigned long int length;
	unsigned long int index;
	char letter;

	length = strlen(src);
	for (index = 0; index <= length; index++)
	{
		letter = src[index];
		dest[index] = letter;
	}
	ptr = dest;
	return (ptr);
}
