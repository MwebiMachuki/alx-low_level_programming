#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: char string
 * @src: char string
 * Details: copy the string pointed to by src
 * the buffer pinted to by dest
 * Return: pinter to dest
 */
char *_strcpy(char *dest, char *src)
{
	int j = -2;

	do {
		j++;
		dest[j] = src[j];
	} while (src[j] != '\0');

	return (dest);
}
