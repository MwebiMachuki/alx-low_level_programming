#include <unistd.h> 

/**
 * _putchar - writes a character c to stdout
 * @c: char to print
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
