#include <stdio.h>

/**
 * main - haxadecimal
 * Return: 0 for success
 */

int main(void)
{
int i;
char letters;
for (i = '0'; i <= '9'; i++)
{
putchar(i);
}
for (letters = 'a'; letters <= 'f'; letters++)
{
putchar(letters);
}
putchar('\n');

return (0);
}
