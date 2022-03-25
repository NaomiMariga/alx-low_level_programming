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
	unsigned long int index;
	char s1_letter;
	char s2_letter;
	int difference;

	for (index = 0; s[index] != '\0' || s2[index] != '\0'; index++)
	{
		s1_letter = si[index];
		s2_letter = s2[index];

		if (s1_letter != s2_letter)
		{
			difference = s1_letter - s2_letter;
		}
		else
		{
			difference = s1_letter - s2_letter;
		}
	}
	return (difference);
}
