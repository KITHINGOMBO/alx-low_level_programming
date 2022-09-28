#include "main.h"

/**
 * _puts_recursion - does puts recursively
 * @s: the string
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		s++;
	}

	if (*s == '\0')
	{
		putchar(10);
		return;
	}

	_puts_recursion(s);
}
