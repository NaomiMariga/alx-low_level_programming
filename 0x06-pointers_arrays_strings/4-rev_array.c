#include "main.h"
#include <stdio.h>
/**
 * reverse_array - prints a reversed array
 * @a: array to be reversed
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int index;
	int num;

	for (index = n - 1; index >= 0; index--)
	{
		num = a[index];
		if (num < 10)
		{
			_putchar(num + '0');
		}
		else
		{
			_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
	}
}
