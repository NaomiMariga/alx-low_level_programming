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
	
	for (index = 0; index > n--; index++)
	{
		num = a[n];
		a[n] = a[index];
		a[index] = num;
		
	}
}
