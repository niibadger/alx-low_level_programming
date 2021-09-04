#include "main.h"

/**
 *print_sign - Prints the sign of a number.
 *@n: the number of which the sign will be printed
 *
 * Return: 1 if the number is a positive integer
 *         0 if the number is zero
 *         -1 if the number is negative
 */
int print_sign(int n)
{
char pos = '+';
char zero = '0';
char neg = '-';

if (n > 0)
{
_putchar(pos);
return (1);
}
else if (n == 0)
{
_putchar(zero);
return (0);
}
else
{
_putchar(neg);
return (-1);
}
}
