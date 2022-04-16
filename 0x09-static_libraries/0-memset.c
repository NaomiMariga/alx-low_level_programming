#include "main.h"

/**
 * _memset - fills s memory
 * @s: memory to be filled
 * @b: constant byte to fill s memory
 * @n: number of memory bytes to be filled is s
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
