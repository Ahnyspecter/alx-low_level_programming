#include "main.h"

/**
 * _strcat - concatenates two string.
 * @dest: A pointer to the string to be concarenated upon.
 * @src: The sourse string to be appened to @dest.
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

