#include "main.h"

/**
 * _isalpha - check if character is lowercase
 *@c: Checks if the character 'c' is lowercase
 * Return: 1 if c is lowercase, 0 otherwise
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
