#include <stdio.h>

/**
 * main -print the alpahbet in reverse
 *
 * Return: always (0)
 *
 */
int main(void)
{
	 int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
