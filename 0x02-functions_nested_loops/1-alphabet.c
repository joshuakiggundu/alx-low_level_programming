#include <stdio.h>
#include "main.h"

/**
 * print_alphabet -print the alphabet in lowercase
 *
 * Return: always (0)
 *
 */
void print_alphabet(void)
{
	char i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
}

/**
 * main -print a function
 *
 * Return: always (0)
 *
 */
int main(void)
{
	print_alphabet();
	return (0);
}
