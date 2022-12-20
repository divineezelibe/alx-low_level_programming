#include "main.h"

/**
 * _strlen - Get string length
 * @s: The char
 *
 * Return: integer
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * rev_string - reverse string
 * @s: The char
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	int j = (_strlen(s) - 1);
	char tmp;

	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++; 
		j--;
	}
}
