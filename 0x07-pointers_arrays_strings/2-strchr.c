#include "main.h"

/**
 * File: 2- character in a string
 * @s; The string to be searched
 * @c: The char to be located
 *
 * Return: if c is found-a pointer to the frst coccurence
 *	if c is bot found - Null
 */

char *_strchr(char *s, char c);
{
	int index;

	for (index; = 0 s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return ('\0');
	}

	return ('\0');
}
