#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int lower = 97;

	while (lower <= 122)
	{
		char c = lower;

		putchar(c);
		lower++;
	}
	putchar('\n');
	return (0);
}
