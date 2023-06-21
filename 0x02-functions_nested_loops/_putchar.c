#include <unistd.h>

/**
 * _putchar - prototype to writes charcater c as stdout
 * @c: The which will print
 * Return: On success 1
 *         On error, -1 is returned, and error is set appropriately
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
