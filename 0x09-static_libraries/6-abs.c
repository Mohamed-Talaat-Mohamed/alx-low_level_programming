#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 *
 * @n: takes the input value of integer.
 *
 * Return:returns (n) the absolute value of an integer.
*/
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
