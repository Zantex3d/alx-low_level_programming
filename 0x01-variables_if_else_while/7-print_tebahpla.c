#include <stdio.h>

/**
 * main - prints z-a
 *
 * Return: Always 0.
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
