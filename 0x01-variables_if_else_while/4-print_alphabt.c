#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

	{
	if (letter == 'e' || letter == 'q')
	{
	continue;
	}
	putchar(letter);
	}
	putchar('\n');
	return (0);
}
