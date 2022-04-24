#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate 2 strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, l, m;
	char *str;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		i++;
	}

	while (s2[j] != '\0')
	{
		j++;
	}
	l = i + j;
	str = malloc(sizeof(*s1) * l + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	k = 0;
	while (s1[k] != '\0')
	{
		str[k] = s1[k];
		k++;
	}
	m = 0;
	while (k != l)
	{
		str[k] = s2[m];
		k++;
		m++;
	}
	return (str);
}
