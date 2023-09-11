#include <stdio.h>

/**
 * main - Entry point 
 *
 * Description: print all alphabet letters
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
char letters = 'a';
while (letters <= 'z')
{
putchar(letters);
letters++;
}
putchar('\n');
return (0);
}
