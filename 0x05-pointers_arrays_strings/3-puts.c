#include "main.h"
/**
 *_puts - prints the passed string
 *@str: the passed string
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i))
		_putchar(str + i);
	i++;
}
