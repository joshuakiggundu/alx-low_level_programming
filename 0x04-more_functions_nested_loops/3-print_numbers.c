#include "main.h"
/**
 * print_numbers - prints the numbers and a new line
 *
 * Return: always(0)
 *
 */
void print_numbers(void)
{
	char i  = 48;

	while (i <= 57)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	return (0);
}
