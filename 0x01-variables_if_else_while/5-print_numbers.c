#include <stdio.h>
/**
 * main - Prints if number is positive, zero or negative
 * Return: Always (Success)
 */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
