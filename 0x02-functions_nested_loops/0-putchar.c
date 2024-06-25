#include main.h
/**
 * main - this is the entry point
 * Return: 0 (success)
 */
int main(void)
{
	char school[10] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(school[i]);
	}
	_putchar(10);
	return (0);
}

