#include <stdio.h>

/**
 * print_array - prints array items
 *
 * @a: the int array
 *
 * @n: number of item to be printed
 */
void print_array(int *a, int n)
{
	int index;
	int item;

	for (index = 0; index < n; index++)
	{
		item = a[index];
		if (index != (n - 1))
		{
			printf("%d, ", item);
		}
		else
		{
			printf("%d", item);
		}
	}
}
