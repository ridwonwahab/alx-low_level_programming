x#include "main.h"
/**
 *_puts - prints the passed string
 *@str: the passed string
 */
void _puts(char *str)
{

	while (*str != '\0')
		_putchar(*str + 0);
	++str;
}
