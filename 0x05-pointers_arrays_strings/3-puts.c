#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string, followed by a new line
 * @str: string
 * Return: str
 */

void _puts(char *str)

{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	putchar('\n');
}
