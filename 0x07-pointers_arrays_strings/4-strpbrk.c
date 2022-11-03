#include "main.h"

/**
 * _strpbrk() - searches a string for any of a set of bytes
 * @s; occurance of string to locate
 * @accept: where to locate the string
 * Return: pointer to a byte or nothing
 */
char *_strpbrk(char *s, char *accept)
{
	char x, *y;

	for (x = *s; x != 0; s++, x = *s)
	{
		for (y = accept; *y != 0; y++)
		{
			if (x == *y)
			{
				return (s);
			}
		}
	}
return (0);
}
