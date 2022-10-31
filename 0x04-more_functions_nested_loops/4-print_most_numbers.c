#include "main.h"

/**
 * print_most_numbers - prints 0 to 9 excluding 2 and 4
 * Return:printed numbers
 */
void print_most_numbers(void)
{
	int xy = 0;

	while (xy < 10)
	{
		if (xy != 2 && xy != 4)
			_putchar(xy + '0');
		xy++;
	}
	_putchar('\n');
}
