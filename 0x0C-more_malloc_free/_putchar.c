/**
 * _putchar - writes character c to the stdout
 * @c: the character to print.
 * Return: On success 1.
 *              On error, -1 is returned, and errno iss set appropriatly.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}