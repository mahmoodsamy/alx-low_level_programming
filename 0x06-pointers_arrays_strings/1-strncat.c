#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @src: The source of strings
 * @dest: The destination of the string
 * @n: The length of int
 *
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int counter = 0;
	int i = 0;

	while (dest[counter] != '\0')
	{
		counter++;
	}

	for (i < n && src[i] != '\0'; i++)
	{
		dest[counter] = src[i];
		counter++;
	}

	dest[counter] = '\0';

	return (dest);
}
