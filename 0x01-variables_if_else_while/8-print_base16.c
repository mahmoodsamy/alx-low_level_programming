#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * prints all the numbers of base 16 in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
int i = 0;
while (i < 16)
{
if (i < 10)
{
putchar('0' + i);
}
else
{
putchar('a' + i - 10);
}
i++;
}
putchar('\n');
}
