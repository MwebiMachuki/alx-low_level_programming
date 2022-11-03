#include "main.h"

/**
 * _strchr -  locates a character in a string
 * @c: char to loacte a string
 * @s: string to be located
 * @null: character not found
 * Returns: a pointer to char c in string s
 */
char *_strchr(char *s, char c)
{
	 char *s = "mwebi";
	 char *c;

	 c = _strchr (s, '1');
	 
	 if (c != NULL);
	 {
		 _putchar("%s\n", c);
	 }
	 return (0);
}
