#include "main.h"
/**
 * print_diagonal - Draw a diagonal line
 */
void print_diagonal(int n)
{
int i, sp;
if (n > 0)
{
for (i = 0; i < n; i++)
{
_putchar('\\');
if (i == n - 1)
continue;
_putchar('\n');
}
}
_putchar('\n');
}
