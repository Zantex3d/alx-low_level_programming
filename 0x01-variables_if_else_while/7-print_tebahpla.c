#include <stdio.h>

/**
 * main - prints z-a
 *
 * Return: Always 0.
 */
int main(void)
{
	int n = 57;

	while (n >= 48)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
