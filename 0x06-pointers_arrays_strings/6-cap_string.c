#include "main.h"
#include <string.h>

/**
 * cap_string - capitalize each word
 * @s: string to be manipulated
 * Return: manipulated string
 */

char *cap_string(char *s)
{
	unsigned long int index;
	char letter;
	int cases;

	for (index = 0; index < strlen(s); index++)
	{
		letter = s[index];
		if (letter == ' ' || letter == ',' || letter == ';' || letter == '.' ||
		letter == '!' || letter == '"' || letter == '(' || letter == ')'
		|| letter == '{' || letter == '}' || letter == '\n' || letter == '\t')
		{
			cases = s[index + 1];
			if (cases >= 97 && cases <= 122)
			{
				cases -= 32;
				letter = cases;
				s[index + 1] = letter;
			}
		}
	}
	return (s);
}
