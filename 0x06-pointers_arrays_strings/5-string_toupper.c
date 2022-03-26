#include "main.h"
#include <string.h>

/**
 * string_toupper - change lower to upper case
 * @s: string tobe manipulated
 * Return: manipulated string
 */
char *string_toupper(char *s)
{
	char letter;
	unsigned long int index;
	int cases;

	for (index = 0; index < strlen(s); index++)
	{
		letter = s[index];
		cases = letter;

		if (cases >= 97 && cases <= 122)
		{
			cases -= 32;
			letter = cases;
		}
		s[index] = letter;
	}
	return (s);
}
