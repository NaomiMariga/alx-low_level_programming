#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints number of commandline arguements
 * @argc: number of args
 * @argv: list of args
 * Return: always 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc > 3)
	{
		int i;
		int prod = 1;

		for (i = 1; i < argc; i++)
		{
			prod *= atoi(argv[i]);
		}
	printf("%d\n", prod);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
