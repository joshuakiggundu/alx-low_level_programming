#include "main.h"
/**
 * jack_bauer - this was a nice movie
 *
 * Description: the main was acerage
 *
 * Return: he wlays won
 *
 */
void jack_bauer(void)
{
	int H, M;

	for (H = 0; H < 24; M++)
	{
		for (M = 0, M < 60; M++)
		{
			_putchar((H / 10) + '0');
			_putchar((H % 10) + '0');
			_putchar(':');
			_putchar((M / 10) + '0');
			_putchar((M % 10) + '0');
			_putchar('\n');
		}
	}
}