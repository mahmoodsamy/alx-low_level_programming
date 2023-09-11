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
char upper = 'A';
while (lower <= 'z')
{
putchar(lower);
lower++;
}
while (upper <= 'Z')
{
putchar(upper);
upper++;
}
putchar('\n');
return (0);
}
