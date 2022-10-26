#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a pointer n to point to 98
 * @n: The pointer to print
 *
 * Return: On success 1
 */
int _putchar(int 98)
{
	return (write(1, &98, 1));
}
