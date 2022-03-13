#include <stdio.h>
/**
 * main - reversed a - z
 *
 * Return: Always 0 on sucess
 */
int main(void)
{
	int lower = 122;

	while (lower >= 97)
	{
		char z = lower;

		putchar(z);
		lower--;
	}
	putchar('\n');
	return (0);
}
