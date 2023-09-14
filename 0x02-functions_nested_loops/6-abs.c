#include "main.h"

/**
 * _abs - function that computes the absloute
 * value of an integer
 *
 * @n: takes an integer input
 *
 * Return: Always 0 (Success)
*/

int _abs(int n)
{
if (n < 0)
	n = (-1) * n;
return (n);
}
