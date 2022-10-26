#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: first integer
 * @b: second integer
 * Return: void or nothing
 */

void swap_int(int *a, int *b)
{
	int y = *a;

	*a = *b;

	*b = y;
}
