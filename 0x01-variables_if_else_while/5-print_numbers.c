#include <stdio.h>

/**
 * main -prrint numbers in base ten
 *
 * Return:  always (0)
 *
 */
int main(void)
{
	char i = 48;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
