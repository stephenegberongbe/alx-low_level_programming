#include <unistd.h>

/**
 * _putchar - Writes charac c to stdout
 * @c: The charac to be printed
 *
 * Return: 1. On success
 * On error, return -1, and errno is appropriately set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
