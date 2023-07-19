#include "main.h"

/**
 * _islower - pritns an integer
 *
 * Description: use _putchar to print
 * @c: will collect the data
 *
 * Return: (0) (1)
 *
 *
 */
int _islower(int c)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
		return (1);
		}
	}
	return (0);
}
