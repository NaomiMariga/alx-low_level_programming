#include "main.h"

/**
 * _isdigit - check if its digit
 *@c: digit to check
 * Return: 1 if true or 0 if false
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
