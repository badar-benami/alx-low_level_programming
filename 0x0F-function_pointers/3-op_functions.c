#include "3-calc.h"

/**
 * op_add --- adds 2 nmbrs.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: add.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub --- subctracts 2 nmbrs.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: Difference.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies 2 nmbrs.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: multiplication.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div --- divides 2 nmbrs.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: division.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculates the module of 2 nmbrs.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: remainder of the division.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
