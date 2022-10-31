#include "main.h"
#include <unistd.h>

/**
 * _putchar.c - writes character c
 * @c: char to print
 * Return: 1 on sucess
 */
int _putchar(char c)
{
	return (write(1, &c, 1))
}
