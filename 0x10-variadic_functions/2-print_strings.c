#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints the strings, followed by a New line.
 * @separator: The string to be printed btw strings.
 * @q: The num of strings passed to the function.
 * @...: var num of strings to be printed.
 *
 * Description: If separator is NULL, do not print
 *              If one of strings if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int q, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, q);

	for (index = 0; index < q; index++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (q - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
