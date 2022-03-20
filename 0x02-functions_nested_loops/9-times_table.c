#include "main.h"

/**
 * times_table - prints 9 times table
 */
void times_table()
{
	int i;
	int j;
		
	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			char k = i;
			char l = j;
	
			_putchar(k * l);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
