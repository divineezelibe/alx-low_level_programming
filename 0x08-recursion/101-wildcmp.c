#include "main.h"

int findsrc(char *s, char c, int i, int p);

/**
 * wildcmp - compare two strings with "wildcard expansion" capabilities
 * @s1: string 1
 * @s2: string 2
 * Return: 1 if strings can be considered identical, else 0
 */

 /**
  *  * wildcmp - Compare two strings allowing for wildcard char
  *   * @s1: String being compared
  *    * @s2: String being compared against
  *     *
  *      * Return: 1 if considered identical, 0 otherwise
  *       */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
			return (1);
	}

	return (0);
}
