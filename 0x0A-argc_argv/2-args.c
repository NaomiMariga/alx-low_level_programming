#include <stdio.h>

/**
 * main - prints all commandline arguements
 * @argc: number of args
 * @argv: list of args
 * Return: always 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
