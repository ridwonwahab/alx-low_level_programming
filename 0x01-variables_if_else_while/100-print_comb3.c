#include <stdio.h>

/**
 * main - print combination of numbetrs
 * Return: 0 if runs
 */

int main(void)
{
int x, y;

for (x = 0; x <= 8; x++)
{

for (y = 0; y <= 9; y++)
{

if (y > x)
{
putchar('0' + x);
putchar('0' + y);
if (!(x == 8 && y == 9))
{
putchar(',');
putchar(' ');
}
}
}


}
putchar('\n');
return (0);
}
