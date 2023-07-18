#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints that alphabet ten times bro
 *
 * Return: always (0)
 *
 */
void print_alphabet_x10(void)
{
	char i = 0;
	char  lower;

	while (i < 10)
	{
		char lower = 97;

		while (lower <= 122)
		{
			putchar(lower);
			lower++;
		}
		putchar('\n');
		i++;
	}
}
