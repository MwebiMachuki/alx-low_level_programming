#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a pointer
 * @n: pointer to print
 * Return: 1 on success
 */
int _putchar(char *n)
{
	return (write(1, &*n, 1));
}
