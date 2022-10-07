#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if(size == 0)
		return (NULL);
	s = malloc (size * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}

	i=0;
		while(i < size)
		{
		s[i] = c;
		i++;
		}
	return (s);
}
