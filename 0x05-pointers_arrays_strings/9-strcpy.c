#include "main.h"
/**
 * _strcpy - copies src to dest
 *
 * @dest: copy to
 *
 * @src: copy from
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *p;

	*src = *dest;
	p = &dest;

	return (p);
}
