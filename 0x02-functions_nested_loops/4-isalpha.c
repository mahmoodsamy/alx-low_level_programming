#include "main.h"

/**
 * _isalpha - checks if character is a letter or not
 *
 * @c: takes input from other functions
 * Return: 1 if c is a letter
*/

int _isalpha(int c)
{
if (c >= 97 && c <= 122)
	return (1);
if (c >= 65 && c <= 90)
	return (1);
return (0);
}
