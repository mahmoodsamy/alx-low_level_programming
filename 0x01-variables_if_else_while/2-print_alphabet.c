#include<stdio.h>

/**
 * main - Entery point 
 *
 * Description: print all alphabet letters
 *
 * Return: Always 0 (Success)
*/

in main (void)
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
