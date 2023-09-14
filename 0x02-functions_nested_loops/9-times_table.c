#include "main.h"

/**
 * times_table - Prints the 9 times table.
 *
 * Description: This function prints the 9 times table in a well-formatted
 * manner.
*/

void times_table(void)
{
int num, mult, prod;

for (num = 0; num <= 9; num++)
{
_putchar(48); /* Print the first digit (0) */

for (mult = 1; mult <= 9; mult++)
{
_putchar(',');
_putchar(' ');

prod = num * mult;

/* Format the output */
if (prod <= 9)
{
_putchar(' '); /* Put a space for single-digit numbers */
}
else
{
_putchar((prod / 10) + 48); /* Get the first digit */
}
_putchar((prod % 10) + 48); /* Get the second digit */
}
_putchar('\n'); /* Move to the next line after each row */
}
}
