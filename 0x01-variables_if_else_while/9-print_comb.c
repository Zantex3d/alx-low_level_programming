#include <stdio.h>

/**
  * main - prints all possible
  * combination of a single digit number
  *
  * Return: Always 0
  */
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);

		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
