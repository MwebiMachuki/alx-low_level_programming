#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagonals-square matrix of integers
 * @a: the matrix of integers
 * @size: size of square
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int x;
	int sum1 = 0;
	int sum2 = 0;

	for (x = 0; x < size * size; x++)
	{
		if (x % (size + 1) == 0)
		{
			sum1 += a[x];
		}
		if (x % (size - 1) == 0 && (x > 0 && (x < (size * size - 1))))
		{
			sum2 += a[x];
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
