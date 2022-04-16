#include "main.h"

/**
 * _strlen - checks length of string
 *
 *@s: string to be checked
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int index;
	int count = 0;

	for (index = 0; s[index] != '\0'; index++)
	{
		count += 1;
	}
	return (count);
}
