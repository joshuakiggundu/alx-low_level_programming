#include <stdio.h>
/**
 * main - print alphabets in lowercase
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
	putchar('\n');
	return (0);
}
