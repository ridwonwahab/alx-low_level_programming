#include <stdio.h>

/**
* main - main function
* Return: 0  if all is well
*/

int main(void)
{
int i;
for (i = 0; i <= 9; i++)
{
putchar('0' + i);
if (i <= 8)
{   
putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}
