#include "main.h"

/**
 * times_table - prints 9 times table
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k <= 9 && j < 9)
			{
				_putchar(k + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (k <= 9 && j == 9)
			{
				/**
				 * 9 is the last number so we are checking so as not to put comma and space
				 * Instead we print a new line when we print the last product
				 * Also where result is more than 1 digit we divide by 10
				 * then get modulo to get 2 characters
				 */
				_putchar(k + '0');
				_putchar('\n');
			}
			else if (k >= 10 && j < 9)
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (k >= 10 && j == 9)
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
				_putchar('\n');
			}
		}
	}
}
