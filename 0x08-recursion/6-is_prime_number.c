#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer
 *			if not return 0
 * @n: integer
 *
 * Return: 1 if n is prime number or  0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number(n, n - 1));
}

/**
 * prime_number - check if a number is prime recursively
 * @n: integer
 * @p_n: repeatition number
 *
 * Return: 1 if n is prime number or 0 if not.
 */

int prime_number(int n, int p_n)
{
	if (p_n	== 1)
		return (1);
	else if (n % p_n == 0 && p_n > 0)
		return (0);
	return (prime_number(n, p_n - 1));
}
