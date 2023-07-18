#include <stdio.h>

/**
 * main -to print lowercase and uppercase letters
 *
 * Return: always (0)
 *
 */
int main(void)
{
	char i = 97;

	while (i <= 122)
	{
	putchar(i);
	i++;
	}
	char b = 65;

	while (b <= 90)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
