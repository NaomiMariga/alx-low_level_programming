#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int lower = 97;

	for (lower = 97; lower <= 122; lower++)
	{
		char a = lower;

		if (lower != 101 && lower != 113)
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
