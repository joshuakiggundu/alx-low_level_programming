#include "main.h"

/**
 * print_rev - prints the value in rev
 *
 * @s: intger
 * Return: no value
 */
void print_rev(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}

	for (a--; a >= 0; a--)
	_putchar(s[a]);
	_putchar('\n');
}
