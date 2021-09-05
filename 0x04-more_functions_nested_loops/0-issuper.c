#include "main.h"

/**
 *_isupper - Checks for uppercase
 *Return: 1 when char is upper an 0 when otherwise
 */
int _siupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
return (1);
else if ((c >= 'a') && (c <= 'z'))
return (0);
else
return (0);
}
