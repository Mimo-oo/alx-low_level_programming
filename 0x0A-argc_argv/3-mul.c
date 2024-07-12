#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply the arguments
 * @argc: number of arguemtns
 * @argv: name of array
 * Return: 0 success
 *
 */

int main(int argc, char *argv[])
{
	int mul = 0;

	if (argc < 2)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);

	}
}
