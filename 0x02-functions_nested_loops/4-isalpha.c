#include "main.h"
/**
 * _isalpha - returns a bunch of numbers
 *
 * Description: we are using something nice
 *
 * @c: collect the charcter
 *
 * Return: Low figures
 */
int _isalpha(int c)
{
	char lower, upper;
	int letter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (lower == c || upper == c)
			{
				letter = 1;
			}
		}
	}
	return (letter);
}
