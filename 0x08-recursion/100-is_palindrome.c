#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @str: string
 * Return: 1 if it is or 0 it's not
 */

int is_palindrome(char *str)
{
	if (*str == 0)
		return (1);
	return (pal_check(str, 0, _strlen_recursion(str)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @str: string
 * Return: length of the string
 */

int _strlen_recursion(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + _strlen_recursion(str + 1));
}

/**
 * pal_check - checks the characters recursively for palindrome
 * @str: string
 * @rep: repetition
 * @len: length of the string
 * Return: 1 if found palindrome or 0 if not.
 */

int pal_check(char *str, int rep, int len)
{
	if (*(str + rep) != *(str + len - 1))
		return (0);
	else if (rep >= len)
		return (1);
	return (pal_check(str, rep + 1, len - 1));
}
