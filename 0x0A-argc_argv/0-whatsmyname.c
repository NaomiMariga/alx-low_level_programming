#include <stdio.h>

/**
 * main - prints its name
 * @argc: number of commandline arguements
 * @argv: list of the commandline arguements
 * Return: always 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
	printf("%s\n", argv[0]);
	}
	return (0);	
}
