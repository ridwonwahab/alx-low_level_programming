#include "main.h"
#include <stdlib.h>

char *_strdup(char *str)
{
	char *duplicate;
	int i, len;

	if (str == NULL)
		return (NULL);


	for (i = 0; str[i]; i++)
		len++;


	duplicate = malloc((len + 1) * sizeof(char));


	if (duplicate == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		duplicate[i] = str[i];

	duplicate[len] = '\n';

	return (duplicate);
}
