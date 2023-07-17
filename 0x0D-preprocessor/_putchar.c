#include <unistd.h>

/**
 * _putchar - Writes char to stdout
 * @c: char to be printed
 *
 * Return: 1. On success
 * On error, return to -1, and errno is appropriately set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
