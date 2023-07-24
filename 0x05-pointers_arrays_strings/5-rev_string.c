#include "main.h"

/**
 * rev_string - sets the variable
 *
 * @s: integer
 *
 * Return: no value
 */
void rev_string(char *s)
{
	int length, i;
	char temp;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
