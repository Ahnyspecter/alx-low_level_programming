#include "main.h"

/**
 * print_rev - prints a reversed string
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int = 0;
	while (s[i] != '\0')
		i++;
	for (i = i - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}