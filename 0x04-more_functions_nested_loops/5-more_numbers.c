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
		j = 0;

		while (j <= 14)
		{
		_putchar(j);
		j++;
		}
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
