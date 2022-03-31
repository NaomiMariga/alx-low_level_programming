#include "main.h"

/**
 * sqrt_recursion - evaluates natural squareroot of  number
 * @n: integer
 * Return: squareroot, or -1 if no natural squaroot
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (n-- * _sqrt_recursuion(n -1) == n);

}
