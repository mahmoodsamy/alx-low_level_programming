#include "main.h"
/**
 * _puts - prints a string followed by a newline to stdout
 *
 * @str: string parameter tp print
 *
 * Return: nothing
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
