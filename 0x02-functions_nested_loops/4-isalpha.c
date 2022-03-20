#include "main.h"

/**
 * _isalpha- checks if character is lowercase uppercase or number
 *
 *@c: letter to be tested
 *
 * Return: 1 if true and 0 if false
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c <= '0' && c >= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

