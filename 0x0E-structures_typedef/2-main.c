#include <stdio.h>
#include "dog.h"

/**
 * main - check code
 *
 * Return: 0. Always
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    print_dog(&my_dog);
    return (0);
}
