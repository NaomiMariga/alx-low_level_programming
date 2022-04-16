#include "main.h"

/**
 * _memcpy - copies bytes from src to dest
 * @dest: destination of copied bytes
 * @src: copied from
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
