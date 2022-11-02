#include "main.h"

/**
 * _memeset - fills memory with a constant byte
 * @n: bytes to be filled
 * @s: memory area
 * @b: constant byte
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *xyz = s;

	while (n-- > 0)
		*xyz++ = b;
	return (s);
}
