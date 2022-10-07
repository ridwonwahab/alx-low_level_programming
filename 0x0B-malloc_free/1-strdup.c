#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory

 *           containing a copy of the string given as parameter.

 * @str: The string to be copied.

 * Return: If str == NULL or insufficient memory is available - NULL.

 *         Otherwise - a pointer to the duplicated string.

 */

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
