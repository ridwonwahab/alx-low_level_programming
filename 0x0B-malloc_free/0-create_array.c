#include "main.h"
#include <stdlib.h>

/**
 * create_array - Writing a function that creates an array of chars, and initi
 * @c : the character
 * @size : the size of the array
 * Return: Returns a pointer to the array or NULL if @size = 0
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
		{
		s[i] = c;
		i++;
		}
	return (s);
}
