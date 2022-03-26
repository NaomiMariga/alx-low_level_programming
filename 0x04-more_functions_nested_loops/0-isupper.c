#include "main.h"

/**
 * _isupper - check if its uppecase
 *@c: letter to check
 * Return: 1 if true or 0 if false
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
