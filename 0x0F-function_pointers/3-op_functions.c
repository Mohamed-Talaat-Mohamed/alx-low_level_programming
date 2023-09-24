#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - addition of num1 and num2
 *
 * @a: num1
 *
 * @b: num2
 *
 * Return: (a+b)
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction of num1 and num2 
 *
 * @a: num1
 *
 * @b: num2
 *
 * Return: (a-b)
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multipliction of num1 and num2
 *
 * @a: num1
 *
 * @b: num2
 *
 * Return: (a*b)
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - dividtion of num1 and num2
 *
 * @a: num1
 *
 * @b: num2
 *
 * Return: (a/b)
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - moduluation of num1 and num2
 *
 * @a: num1
 *
 * @b: num2
 *
 * Return:( modulas)
 */

int op_mod(int a, int b)
{
	return (a % b);
}
