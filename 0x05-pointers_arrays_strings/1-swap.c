#include "main.h"

/**
 * swap_int - swaps the value of the pointers
 *
 * @a: integer
 * @b: integer two
 * Return: none
 */
void swap_int(int *a, int *b)
{
	int empty;
	int *c = &empty;

	*c = *a;
	*a = *b;
	*b = *c;
}
