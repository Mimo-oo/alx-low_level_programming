#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 (sucess)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	putchar(i + 'o');
	if (i < 9)
	{
	putchar(',');
	putchar(' ');
	}
	else
	{
	putchar('\n');
	}
	}
	return (0);
}
