#include <stdlib.h>
#include "main.h"

/**
 * *_strchr - Find a character in a string
 * @s: Char string
 * @c: Char what we are looking for
 *
 * Return: char
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
