#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* something goes here  */

/**
 *main - Entry
 *Return: Always 0 (Success)
 */

int main(void)
{
    int n;
    srand(time(0));
    n = rand() - RAND_MAX / 2;
    if (n < 0){
      printf("%i is positve", n);
       }
       else if (n > 0){
	 printf("%i is negative", n);
       }
       else {
	 printf("%i is zero", n);
       }
	       
    return (0);
}
