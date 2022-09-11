#include <stdio.h>

/**
 * main - This main prints small leter and capital letters
 * Return: 0 if all is well
 */
int main(void)
{
char smallAlpha = 'a';
char bigAlpha = 'A';

while (smallAlpha <= 'z')
{
putchar (smallAlpha);
smallAlpha++;
}

while (bigAlpha <= 'Z')
{
putchar (bigAlpha);
bigAlpha++;
}
putchar('\n');


return (0);
}
