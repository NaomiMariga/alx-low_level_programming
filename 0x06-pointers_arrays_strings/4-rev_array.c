#include "main.h"
/**
 * reverse_array - prints a reversed array
 * @a: array to be reversed
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int index;

	for (index = n - 1; index >= 0; index--)
	{
		num = a[index];
		if (index != 0)
		{
			printf("%d, ", num);
		}
		else
		{
			printf("%d", num);
	}
}
