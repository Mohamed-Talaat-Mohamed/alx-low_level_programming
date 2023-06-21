#include "main.h"

/**
 * _islower - Checks for lowercase char
 *@c: The char to be checked
 * Return: 1 for lowercase char
 *	   0 for any*
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
