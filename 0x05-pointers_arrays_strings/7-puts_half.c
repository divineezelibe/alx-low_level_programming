#include "main.h"

/**
 * _strlen  - Get string length
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
 * puts_half - prints half of a string, followed by a new line
 * @str: string to print
 *
 */

void puts_half(char *str)
{
	int idx;
	int len = _strlen(str);

	/* find the index to start depending on even/odd amount of strlen */
	if (len % 2 != 0)
		idx = (len / 2) + 1;
	else
		idx = (len / 2);

	while (idx < len)
	{
		_putchar(*(str + idx));
		idx++;
	}

	_putchar('\n');
}
