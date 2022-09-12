#include <stdio.h>

/**
* main - main function
* Return: 0  if all is well
*/

int main(void)
{
int i;
for (i = 0; i <= 8; i++)
{
putchar('0' + i);
putchar(',');
putchar(' ');
}
putchar('0' + 9);

return (0);
}
