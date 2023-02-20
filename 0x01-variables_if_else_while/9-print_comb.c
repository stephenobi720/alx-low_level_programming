#include <stdio.h>
/**
 *main - entry point
 *Return: 0
*/
int main(void)
{
int i, j, k, l;

for (i = 0; i <= 9; i++)
{
putchar(i + '0');
putchar(',');
putchar(' ');
for (j = i + 1; j <= 9; j++)
{
putchar(j + '0');
putchar(',');
putchar(' ');
for (k = j + 1; k <= 9; k++)
{
putchar(k + '0');
putchar(',');
putchar(' ');
for (l = k + 1; l <= 9; l++)
{
putchar(l + '0');
putchar(',');
putchar(' ');
}
}
}
}

return (0);
}
