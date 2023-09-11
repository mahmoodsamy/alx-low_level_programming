#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program generates last gigit of a random number and
 *              checks if it's positive, zero, or negative.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
char lower = 'a';
while (lower <= 'z')
{
if (lower != 'e' && lower != 'q')
{
putchar(lower);
}
lower++;
}
putchar('\n');
return (0);
}
