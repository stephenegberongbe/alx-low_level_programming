#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name_as_is - Prints name as it is
 * @name: name of person
 *
 * Return: Null.
 */
void print_name_as_is(char *name)
{
    printf("Hello, my name is %s\n", name);
}

/**
 * print_name_uppercase - Prints name in uppercase Sensitive
 * @name: name of person
 *
 * Return: Null.
 */
void print_name_uppercase(char *name)
{
    unsigned int o;

    printf("Hello, my uppercase name is ");
    o = 0;
    while (name[o])
    {
        if (name[o] >= 'a' && name[o] <= 'z')
        {
            putchar(name[o] + 'A' - 'a');
        }
        else
        {
            putchar(name[o]);
        }
        o++;
    }
}

/**
 * main - chec code
 *
 * Return: 0. Always
 */
int main(void)
{
    print_name("Bob", print_name_as_is);
    print_name("Bob Dylan", print_name_uppercase);
    printf("\n");
    return (0);
}
