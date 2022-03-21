#include "main.h"
/**
 * swap_int - swaps 2 integer values
 *
 * @a: char to be swapped
 *
 * @b: char to be swapped
 */
void swap_int(int *a, int *b)
{
	int tempholder = *a;
	*a = *b;
	*b = tempholder;
}
