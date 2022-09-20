#include "main.h"
/**
 *_strlen - retutns the lenght of string
 *@s: string which the lenght is to be found
 *Return: lenght if the string
 */
int _strlen(char *s)
{
	int lenght = 0;

	while (s[lenght])
	{
		lenght += 1;
		lenght++;
	}
	return (lenght);
}
