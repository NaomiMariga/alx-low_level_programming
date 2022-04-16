#include "main.h"
#include <stddef.h>

/**
 * _strstr - 
 *
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	char *byte;
	char *null;

	null = NULL;
	byte = "\0";
	for (i = 0; haystack[i] != '\0'; i++)
	{	
		for (j = 0; needle[j]; j++)
		{
			while (haystack[i] == needle[j])
			{
				byte += haystack[i];
				i++;
				j++;
				if (needle[j] == '\0')
				{
					break;
					return (byte);
				}
			}
			return (byte);
		}
		
	}
	return (null);

}
