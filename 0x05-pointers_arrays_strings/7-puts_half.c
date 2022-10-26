#include "main.h"

/**
 * _puts half - print the second half of the string
 * @str: string to be printed
 * Return: string
 */

void puts_half(char *str)

{
	int j = 0;

	for (; str[j] != '\0'; j++)
	{
		if ((j % 2) == 0)
			_putchar(str[j]);
		else
			continue;
	}
	_putchar('\n');
}
