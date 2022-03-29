#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sums diagonally
 * @a: array
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
	int i, first_diag, second_diag;

	first_diag = 0;
	second_diag = 0;
	for (i = 0; i < size * size; i++)
	{
		if (i % (size + 1) == 0)
		{
			first_diag += *(a + i);
		}
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
		{
			second_diag += *(a + i);
		}
	}

	printf("%d, %d\n", first_diag, second_diag);
}
