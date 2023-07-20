#include <unistd.h>

/**
 * _putchar - writes the chara a to stdout
 * @a: The char to be printed
 *
 * Return: 1. On success
 * On error,return -1, and errno is set appro.
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}
