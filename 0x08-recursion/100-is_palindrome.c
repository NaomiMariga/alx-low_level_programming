#include "main.h"
#include <string.h>

/**
 * check_palindrome - calculates if palindrome
 * @s: string to check
 * @len: length of string being checked
 * Return: 1 if palindrome and 0 if not
 */

int check_palindrome(char *s, int len)
{
	if (len < 1)
	{
		return (1);
	}
	if (*s == *(s + len))
	{
		return (check_palindrome(s + 1, len - 2));
	}
	return (0);
}

/**
 * is_palindrome - checks string that look same from front and back
 * @s: striing to check
 * Return: 1 if true and 0 if false
 */
int is_palindrome(char *s)
{
	int len = strlen(s) - 1;

	return (check_palindrome(s, len));
}
