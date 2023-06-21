#include "main.h"

/**
 * _islower - a function to Check if character is lowercase
 *
 *&c: checks input of function
 *
 *Return: return 1 if 'c' lowercase other always 0
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
