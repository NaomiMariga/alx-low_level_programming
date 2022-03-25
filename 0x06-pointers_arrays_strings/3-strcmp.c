#include "main.h"
#include <string.h>
/**
 * _strcmp - compare 2 strings
 * @s1: first string
 * @s2: second string
 * Return: differnce in strings
 */
int _strcmp(char *s1, char *s2)
{
	int index;
	char s1_letter;
	char s2_letter;


	for (index = 0; s1[index] != '\0' || s2[index] != '\0'; index++)
	{
		s1_letter = s1[index];
		s2_letter = s2[index];

		if (s1_letter != s2_letter)
		{
			return (s1_letter - s2_letter);
		}
	}
	return (0);
}
