#include "main.h"

/*
 * jackbauer - prints minutes of the day
 */
void jack_bauer(void)
{
	int hour;
	int hours;
	int min;
	int mins;

	for (hour = 0; hour <= 2; hour++)
	{
		for (hours = 0; hours <= 3; hours++)
		{	
			for (min = 0; min <= 5; min++)
			{
				for (mins = 0; mins <= 9; mins++)
				{
					_putchar('0' + hour);
					_putchar('0' + hours);
					_putchar(':');
					_putchar('0' + min);
					_putchar('0' + mins);
					_putchar('\n');
				}
			}
	       }
	}
	       			       
}
