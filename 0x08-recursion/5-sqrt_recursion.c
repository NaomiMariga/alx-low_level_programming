#include "main.h"

/**
 * get_sqrt - helper function to calculate square root
 * @num: to get square root of
 * @root: to multiply with itself to find its square
 * Return: root on success or -1 if no natural squareroot exists
 */

int get_sqrt(int num, int root)
{
	if (root * root == num)
	{
		return (root);
	}
	else if (root * root > num)
	{
		return (-1);
	}
	return (get_sqrt(num, ++root));
}

/**
 * _sqrt_recursion - evaluates natural squareroot of  number
 * @n: integer
 * Return: squareroot, or -1 if no natural squaroot
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
	{
		return (-1);
	}
	return (get_sqrt(n, root));
}
