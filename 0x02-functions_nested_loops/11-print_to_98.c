#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print from n upto 98
 *
 * @n: count from n
 */
void print_to_98(int n)
{
	int count;

	if (n > 98)
	{
		count = n;
		while (count > 98)
		{
			_putchar('0' + count);
			_putchar(',');
			_putchar(' ');
			count--;
		}	
	 	_putchar('\n');	
	}
	else if (n < 98)
	{
		count = n;
		while (count < 98)
		{
			_putchar('0' + count);
			_putchar(',');
			_putchar(' ');
			count++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('0' + n);
		_putchar('\n');
	}	
}
