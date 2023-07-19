#include "3-calc.h"

int op_add(int c, int d);
int op_sub(int c, int d);
int op_mul(int c, int d);
int op_div(int c, int d);
int op_mod(int c, int d);

/**
 * op_add - Returns sum of two numbers.
 * @c: The first number.
 * @d: The second number.
 *
 * Return: The summation of c and d.
 */
int op_add(int c, int d)
{
	return (c + d);
}
/**
 * op_sub - Returns  difference of two numbers.
 * @c: The first number.
 * @d: The second number.
 *
 * Return: difference of c and d.
 */
int op_sub(int c, int d)
{
	return (c - d);
}
/**
 * op_mul - Returns product of two numbers.
 * @c: The first number.
 * @d: The second number.
 *
 * Return: The product of c and d.
 */
int op_mul(int c, int d)
{
	return (c * d);
}
/**
 * op_div - Returns division of two numbers.
 * @c: The first number.
 * @d: The second number.
 *
 * Return: Quotient of c and d.
 */
int op_div(int c, int d)
{
	return (c / d);
}
/**
 * op_mod - Returns the remainder of division of two numbers.
 * @c: The first number.
 * @d: The second number.
 *
 * Return: Remainder of division c by d.
 */
int op_mod(int c, int d)
{
	return (c % d);
}
