#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Print a quote without print or puts function
 *
 * Return: 1 (failed)
 */

int main(void)
{char q[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, q, 59);
return (1);
}
