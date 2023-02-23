#include "main.h"

/**
 *print_last_digit - print the last digit
 *@r: int input
 *Return: last digit of r
*/

int print_last_digit(int r)
{
int n;

if (r < 0)
n = -1 * (r % 10);
else
n = r % 10;
_putchar((n % 10) + '0');
return (n % 10);
}
