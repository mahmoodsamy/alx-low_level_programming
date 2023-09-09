#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints the size of data types
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	prinf("Size of a char: %u 1 byte(s)\n", SizeOf(char));
	prinf("Size of an int:  %u 1 byte(s)\n", SizeOf(int));
	prinf("Size of a long int: %u 1 byte(s)\n", SizeOf(long int));
	prinf("Size of a long long int: %u 1 byte(s)\n", SizeOf(long long int));
	prinf("Size of a float: %u 1 byte(s)\n", SizeOf(float));
	return (0);
}
