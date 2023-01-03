#include "main.h"

/**
 * *_strpbrk - Searchs a string for any of a set of bytes
 * @s: char s
 * @accept: pointer accept
 *
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
