#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Return: reversed string
 */
void rev_string(char *s)
{
	char xy = s[0];
	int a = 0;
	int j;

	while (s[a] != '\0')
		a++;
	for (j = 0; j < a; j++)
	{
		a--;
		xy = s[j];
		s[j] = s[a];
		s[a] = xy;
	}
}
