#include <stdio.h>

/**
 * main - prints number of commandline arguements
 * @argc: number of args
 * @argv: list of args
 * Return: always 0 on success
 */

int main(int argc, char *argv[])
{
	int i;
	int count = 0;

	i = 0;
	while (argv[i] != argv[argc])
	{
		count += 1;
		i++;
	}
	printf("%d\n", argc - 1);
	return (0);
}
