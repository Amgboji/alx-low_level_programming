#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
       return (write(1, &c, 1));
}

TASK 0

#include "main.h"
/**
 * _puts_recursion - prints a string followed by a newline
 * @s: the string we print
 * Return: void
 */
void _puts_recursion(char *s)
{
    if (*s)
    {
        _putchar(*s);
        _puts_recursion(s + 1);
    }
    if (!*s)
    _putchar('\n');
}

