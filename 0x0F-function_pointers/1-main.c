#include <stdio.h>
#include "function_pointers.h"

/**
 * print_elem - Prints Integer
 * @elem: Integer to be printed
 *
 * Return: Null.
 */
void print_elem(int elem)
{
    printf("%d\n", elem);
}

/**
 * print_elem_hex - Prints an Integer, hexadecimal way
 * @elem: integer to be printed
 *
 * Return: Null.
 */
void print_elem_hex(int elem)
{
    printf("0x%x\n", elem);
}

/**
 * main - check  code
 *
 * Return: 0. Always
 */
int main(void)
{
    int array[5] = {0, 98, 402, 1024, 4096};

    array_iterator(array, 5, &print_elem);
    array_iterator(array, 5, &print_elem_hex);
    return (0);
}
