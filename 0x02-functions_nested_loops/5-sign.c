#include "main.h"
/**
 * print_sign - making a good function
 *
 * Description: a good function today
 *
 * @n: function sort values
 *
 * Return: always (0)
 *
 */
int print_sign(int n)
{
	int negative = -1;
	char ch = (char) negative;

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (ch);
	}
}
