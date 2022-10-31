#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 * Return: printed numbers
 */
void print_numbers(void)
{
	int xy;

	for (xy = 0; xy < 9; xy++)
	{
		_putchar(xy);
	}
	_putchar('\n');
}
