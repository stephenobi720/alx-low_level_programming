#include <stdio.h>
/**
 *main - print both upper and lower case
 *Return: 0
*/

int main(void)
{
int i;
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}

for (i = 'A'; i <= 'Z'; i++)
{
putchar(i);
}
putchar('\n');

return (0);
}
