#include <stdio.h>

/**
 * main - dont print e and q
 * Return: 0 if all is well
 */
int main(void)
{
char alphabets = 'a';

while (alphabets <= 'z')
{

if (alphabets == 'e' || alphabets == 'q')
{

}
else
{
putchar(alphabets);
}
alphabets++;
}
putchar('\n');
return (0);
}
