#include "main.h"
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (pal_check(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * pal_check - checks the characters recursively for palindrome
 * @s: string
 * @r: repetition
 * @len: length of the string
 *
 * Return: 1 if found palindrome, 0 if not.
 */
int pal_check(char *s, int r, int len)
{
	if (*(s + r) != *(s + len - 1))
		return (0);
	if (r >= len)
		return (1);
	return (pal_check(s, r + 1, len - 1));
}

