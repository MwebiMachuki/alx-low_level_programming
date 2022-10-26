#include <main.h>
#include <stdio.h>

void reset_to_98(int *n);

/**
 * main - updates the value it points to
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	putchar("n=%d\n", n);
	return (0);
}
