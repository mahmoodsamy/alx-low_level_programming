#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
    srand(time(0));
    n = rand() % 2000000001 - 1000000000;
    if (n > 0)
    {
        printf("%d is positive \n", n);
    }
    else if (n == 0)
    {
        printf("%d is zero \n", n);
    }
    else if (n < 0)
    {
        printf("%d is negative \n", n);
    }
    return (0);
}
