#include "main.h"
#include <stdlib.h>

char *_strdup(char *str)
{
	char *s;
	unsigned int i = 0;

	if (str == NULL)
		return (NULL);

	s = malloc(sizeof(*str) * sizeof(char));

	while (i < sizeof(*str))
	{
		s[i] = str[i];
	i++;
	}

	return (s);

}
