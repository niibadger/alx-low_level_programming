#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* smone */

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
int n;
int w;

srand(time(0));
n = rand() - RAND_MAX / 2;
w = n%10;
printf("Last digit of %i is %i and is ", n, w);

if (w == 0)
{
printf("0\n");
}
else if (w > 5)
{
printf("greater than 5\n");
}
else
{
printf("less than 6 and not 0\n");
}
return (0); 
}
