#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: arguments
 * @...: variable number of arguments to calculate sum
 * Return: 0 if n = 0
 *	Or the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int x, sum = 0;

	va_start(p, n);

	for (x = 0; x < n; x++)
		sum += va_arg(p, int);

	va_end(p);

	return (sum);
}
