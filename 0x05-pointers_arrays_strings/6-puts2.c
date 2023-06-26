#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - function that prints every other character of a string,
 *	starting with the first character,
 *	followed by a new line.
 * @str: string
 *
 * return: nothing
*/

void puts2(char *str)
{
	int i = 0;
	int length = strlen(str);

	while (i < length)
	{	putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}

