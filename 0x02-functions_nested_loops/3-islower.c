#include "main.h"

/**
 * _islower - function check charcter is lowercase or not
 * @c: checks input of function
 *
 * Return: returns 1 if 'c' is lowercase
 * otherwise always 0 (Success)
*/

int _islower(int c)
{
if (c >= 97 && c <= 122)
	return (1);
return (0);
}
