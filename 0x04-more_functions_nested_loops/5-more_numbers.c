#include "main.h"
/**
 * more_numbers - print all the numbers ten time
 *
 * Return: always (0)
 *
 */
void more_numbers(void)
{
	int i = 0;
	int j;

	while (i <= 10)
	{
		while (j <= 14)
		{
		putchar(j);
		j++;
		}
		putchar(i);
		i++;
	}
}
