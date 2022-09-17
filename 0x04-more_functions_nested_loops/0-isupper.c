#include "main.h"

/**
* _isupper - checks for upper case char
*@c: value to be checked if uppercase
*Return: 1 if true 0 if false
*/
int _isupper(int c)
{
	int x;

	if (c >= 'A' && c <= 'Z')
	{
		x = 1;
	}
	else
	{
		x = 0;
	}


	return (x);
}
