#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int start;

	for (start = 0; start < 10; start++)
	{
		putchar(start + '0');
	}
	putchar('\n');
	return (0);
}
