#include <stdio.h>

/**
 * main - print numbers using putchar
 * Return: 0 if runs
 */
int main(void)
{
int n;
for (n = '0'; n <= '9'; n++)
{
putchar(n);
}
putchar('\n');

return (0);
}
