#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int x = 0;

	while (*str != '\0')
	{
		x++;
		str++;
	}

	str -= (x / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
