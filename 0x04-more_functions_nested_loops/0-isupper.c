#include "main.h"
/**
 * _isupper - prints out anything
 *
 * @c: input character
 *
 * Return: (1) or (2)
 *
 */
int _isupper(int c)
{
	if   (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
