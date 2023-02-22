#include "main.h"

/**
 *print_alphabet_x10 -print the alphabet 10 times in lower case
 *with a new line
*/

void print_alphabet_x10(void)
{
char ch;
int i;

i = 0;

while (i < 10)
{
ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
i++;
}
}
