#include <stdio.h>

/**
 * main - prints 1 t0 100 with fizz buzz points
 * Return: Always 0 on success
 */

int main(void)
{
	int count;

	for (count = 1; count <= 100; count++)
	{
		if (count % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (count % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (count % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", count);
		}
	}
	printf("\n");
	return (0);
}
