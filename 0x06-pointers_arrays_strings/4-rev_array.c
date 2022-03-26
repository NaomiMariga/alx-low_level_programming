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
	int *temp_array;

	for (index = 0; index > n; index++)
	{
		temp_array[index] = a[index];
	}
	for (index = 0; index > n--; index++)
	{
		num = temp_array[n];
		a[index] = num;
	}
}
