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
	printf("Size of a char: %u 1 byte(s)\n", SizeOf(char));
	printf("Size of an int:  %u 1 byte(s)\n", SizeOf(int));
	printf("Size of a long int: %u 1 byte(s)\n", SizeOf(long int));
	printf("Size of a long long int: %u 1 byte(s)\n", SizeOf(long long int));
	printf("Size of a float: %u 1 byte(s)\n", SizeOf(float));
	return (0);
}
