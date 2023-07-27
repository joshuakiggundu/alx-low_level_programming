#include "main.h"

/**
 * _strncpy - a good function
 * @dest: intrger
 * @src: integer
 * @n: integr
 * Return: many elemets
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for (i = i; i < n; i++)
	{
		dest[i] = '\0';
	}
}
