#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: print a quote without using print or puts function
 * 
 * Return: 1 (faild)
*/

int main (void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	
	write(1, quote, sizeof(quote) -1);
	return(1);
}
