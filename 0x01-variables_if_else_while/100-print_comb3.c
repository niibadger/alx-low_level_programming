#include <stdio.h>

/**
 *main - print 
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
  int ones;
  int tens;

  for (tens = '0'; tens <= '9'; tens++)
    {
       for (one = (tens + 1); ones++)
	 {
	   putchar(tens);
	   putchar(ones);

	   if (tens != '8' || ones != '9')
	     {
	       putchar(',');
	       putchar(' ');
	     }
	 }
    }
  putchar('\n');
  return (0);
}
