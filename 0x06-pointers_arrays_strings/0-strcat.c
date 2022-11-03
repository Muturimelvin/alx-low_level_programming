#include "main.h"

/**
 * _strcat - concentrate two strings
 * @dest: string to append to
 * @src: string to add
 * overwritting the terminating null byte \0
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);
}
