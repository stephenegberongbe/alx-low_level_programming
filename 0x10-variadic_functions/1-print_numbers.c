#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints num, followed by a New Line.
 * @separator: String to be printed between num.
 * @q: The num of integers to be  passed to the function.
 * @...: A var num of Num to be printed.
 */
void print_numbers(const char *separator, const unsigned int q, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, q);

	for (index = 0; index < q; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (q - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}
