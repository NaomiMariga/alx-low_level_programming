#include <stdio.h>
/**
 * main - digits combinations
 *
 * Return: Always 0 on success
 */
int main(void)
{
	int i;

	while (i <= 9)
	{
		putchar('0' + i);
		if (i == 9)
			break;
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
