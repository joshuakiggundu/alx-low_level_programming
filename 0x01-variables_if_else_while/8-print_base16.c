#include <stdio.h>

/**
 * main -prints all the numbers in bsesixteen
 *
 * Return: always (0)
 *
 */
int main(void)
{
	char i = 48;
	char b = 97;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}

	while (b <= 102)
	{
		putchar(b);
		b++;

	}
	putchar('\n');
	return (0);
}
