#include <stdio.h>

/**
 * theboys -a program that prints a word from the fuction the boys
 *
 *
 * Return: always (0)
 *
 */
void theboys(void)
{
	const char word[] = "_putchar";
	int i = 0;

	while (word[i] != '\0')
	{
		putchar(word[i]);
		i++;
	}
	putchar('\n');
}
/**
 * main -a funtion that prints out
 *
 * Return: always (0)
 *
 */
int main(void)
{
	theboys();
	return (0);
}

