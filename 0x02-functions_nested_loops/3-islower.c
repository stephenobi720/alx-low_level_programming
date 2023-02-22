#include "main.h"

/**
 *_islower - check if the character is lowercase
 *@c: is the character to be checked
 *Return: 1 if the character is lowercase, otherwise let it be 0
*/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
