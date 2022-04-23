#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 * Return: pointer to duplicated string
 */
char *_strdup(char *str)
{
	char *str2;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	str2 = malloc(sizeof(*str) * i);
	if (str2 == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		str2[i] = str[i];
		i++;
	}

	return (str2);
}
