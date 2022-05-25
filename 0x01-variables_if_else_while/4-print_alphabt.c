#include <stdio.h>
/**
 * main - prints a-z
 *
 * Return: Always 0.
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 113)
			continue;
		else if (n == 101)
			continue;
		else
			putchar(n);
		n++;
	}
	return (0);
}
