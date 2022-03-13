#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int upper = 65;
	int lower = 97;

	while (lower <= 122)
	{
		char a = lower;

		putchar(a);
		lower++;
	}

	while (upper <= 90)
	{
		char A = upper;

		putchar(A);
		upper++;
	}
	putchar('\n');
	return (0);
}
