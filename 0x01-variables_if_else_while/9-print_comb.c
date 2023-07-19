#include <stdio.h>

/**
 * main -prints all possible single digit numers
 *
 * Return: always (0)
 *
 */
int main(void)
{
	int i = 0;
	int k = ' ';

	while (i <= 9)
	{
		putchar(i);
		putchar(',');
		putchar(k);
		i++;
	}
	putchar('\n');
	return (0);
}
