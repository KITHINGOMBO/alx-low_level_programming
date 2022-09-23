#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 */
void print_number(int n)
{
	unsigned int m, d, count;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	putchar((num % 10) + '0');
}
