#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: print numbers of base 10 starting from 0 using putchar
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
char lowerRev = 'z';
while (lowerRev != '`')
{
putchar(lowerRev);
lowerRev--;
}
putchar('\n');
return (0);
}
