#include "main.h"

/**
 * wildcmp - a function to compare strings
 * @s1: string with no special character
 * @s2: string with special character
 *
 * Return: 0 if not identical else 1
 *
 * Author: d1dzor
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == '\0' && *s2 == '*' && *(s2 + 1) != '\0')
		return (0);
	if (*s2 == *s1)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));

	return (0);
}

