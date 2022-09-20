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
		lenght++;
	return (lenght);
}
