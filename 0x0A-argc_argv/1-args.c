#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: number of CLI arguements
 * @argv: name of array
 * Return: 0 success
 *
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
