/*
 * File: 4-strpbr.c
 * Auth: sam tech(samuel birhanu)
 */

#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set bytes.
 * @s: The string to be searched
 * @accept: the set of bytes to be searched for.
 *
 * Return: If a set is matched - a pointer to the matched byte.
 *	If no set is matched - NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*S == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}
