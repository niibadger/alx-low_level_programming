#include "main.h"
/**
 * _islower - Checks if a character is lowercase.
 *@c: The character to be checked.
 *
 */
int _isalpha(int c) /* prints uppercase letters*/
{
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
return (1);
else
return (0);
}
