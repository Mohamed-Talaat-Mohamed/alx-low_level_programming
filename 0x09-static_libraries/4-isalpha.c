#include "main.h"

/**
 * _isalpha - function checks is a letter, lowercase or uppercase.
 *
 * @c: checks input of a function.
 *
 * Return: returns 1 if `c` is  lowercase or uppercase
 *			otherwise return always 0 (Success).
*/
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
