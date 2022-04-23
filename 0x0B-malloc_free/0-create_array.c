#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * @size: size of the string
 * @c: character
 * Return: array of characters
 */
char *create_array(unsigned int size, char c)
{
	char *str;

	if (size == 0)
	{
		return (NULL);
	}
	str = malloc(sizeof(c) * size);
	str[0] = 'n';
	if (str == NULL)
	{
		return (NULL);
	}
	return (str);
}
