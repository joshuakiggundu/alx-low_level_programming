#include "main.h"

/**
 * _strcmp - a good functiom
 * @s1: integer
 * @s2: integer
 * Return: a string
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int b = 0;

	for (i = 0; s1[i] != '\0' && b == 0; i++)
	{
		b = s1[i] - s2[i];
	}

	return (b);
}
