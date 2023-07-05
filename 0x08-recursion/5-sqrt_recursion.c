#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: base num of natural square root
 * Return: square root
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (square_root(n, 0));
}

/**
 * square_root - recurses to find the natural
 *		square root of a number
 * @n: base number of sqaure root
 * @res: the square root
 *
 * Return: the result of square root
 */
int square_root(int n, int res)
{
	if (res * res > n)
		return (-1);
	if (res * res == n)
		return (res);
	return (square_root(n, res + 1));
}

