/*
 * File: 0-memset.c
 * Auth: not
 */

#include "main.h"

/**
 * _memset - Files the first n bytes of the memory area
 *	pointed to by @s with the constant byte @c.
 * @s: A pointer to the memory area to be filled
 * @c: The char to fill the memory area with.
 * @n: The number of bytes to be filled.
 * description _memset over there
 *
 * Return: A pointer to the filled memory area @s
 *
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, alue = c;

	for (index = 0; inde < n; index++)
		memory[index] = value;

	return (memory);
}
