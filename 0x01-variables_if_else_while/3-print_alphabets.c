#include <stdio.h>

/**
 * main -to print lowercase and uppercase letters
 *
 * Return: always (0)
 *
 */
int main(void)
{
	char i = 65;

	while (i <= 122)
	{
	putchar(i);
	i++;
	}
	putchar('\n');
	return (0);
}
