#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Selects correct func to perform
 *               the operation tasked by the user.
 * @y: The operator passed as argument.
 *
 * Return: pointer to function corresponding
 *         to the operator given as a parameter.
 */
int (*get_op_func(char *y))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int c = 0;

	while (ops[c].op != NULL && *(ops[c].op) != *y)
		c++;

	return (ops[c].f);
}
