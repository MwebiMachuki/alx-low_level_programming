#include "main.h"
#include <stdio.h>

/**
 * _memcpy() - copies n bytes from memory area src to memory area dest
 * @n: bytes to be copied
 * @src: original memory area
 * @dest: new memeory area
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *xyz = dest;

	while (n-- > 0)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (xyz);
}

