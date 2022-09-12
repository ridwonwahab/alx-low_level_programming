#include <stdio.h>

/**
* main - printing 3 combinations
* Return: 0 if runs successfully
*/

int main(void)
{
int x, y, z;

for (x = 0; x <= 7; x++)
{
for (y = 1; y <= 8; y++)
{

for (z = 2; z <= 9; z++)
{
if (z > y && y > x)
{
putchar ('0' + x);
putchar ('0' + y);
putchar ('0' + z);
if (!(x == 7 && y == 8 && z == 9))
{
putchar (',');
putchar (' ');
}
}
}
}
}

putchar ('\n');


return (0);
}
