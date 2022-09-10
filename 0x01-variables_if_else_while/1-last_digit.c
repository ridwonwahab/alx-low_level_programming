#include <stdio.h>

#include <stdlib.h>

#include <time.h>


/**
 * main - this is the main method
 * Return: 0 if all is fine
* betty style doc for function main goes there
* main method
* RETURN
*/

int main(void)

{

int n;
int ballance;

srand(time(0));

n = rand() - RAND_MAX / 2;

/* your code goes there */
ballance = n % 10;
if (ballance > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, ballance);
}
else if (ballance == 0)
{
printf("Last digit of %d is %d and is 0\n", n, ballance);

else if (ballance < 6 && !(ballance == 0))
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ballance);
}

return (0);

}
