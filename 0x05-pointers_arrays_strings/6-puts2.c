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
 * puts2 - Checks for uppercase characters
 * @str: The character to be checked
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' && i < _strlen(str); i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
