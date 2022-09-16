#include "main.h"


/**
 * main - tests function that prints if integer is positive or negative
 * Return: 0
 */


int main(void)

{

	int i;

i = 0;
positive_or_negative(i);

return (0);

}


/**
 * positive_or_negative - funtion
 * @i: to be tested
 * Return: void
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive", i);
	}
	else if (i == 0)
	{
		printf("%d is zero", i);
	}
	else
	{
		printf("%d is negative", i);
	}

	printf("\n");
}
