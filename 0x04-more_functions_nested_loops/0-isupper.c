#include "main.h"

/**
* _isupper - checks for upper case char
*@c: value to be checked if uppercase
*Return: 1 if true 0 if false
*/
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
