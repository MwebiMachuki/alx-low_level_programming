#include "main.h"
#include <stddef.h>

/**
 * _strstr() - locates a substring
 * @needle: the string to locate
 * @haystack: where to locate the string
 * Return: Nothing
 */
char *_strstr(char *haystack, char *needle)
{
	int point;

	for (; *haystack; haystack++)
	{
		for (point = 0; needle[point]; point++)
		{
			if (!(*(haystack + point)))
			{
				return (NULL);
			}
		if (*(haystack + point) != needle[point])
			break;
		}
		if (needle[point] == '\0')
			return (haystack);
	}
	return (NULL);
}