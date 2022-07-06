#include <stdio.h>
/**
 * main - Print all possible combos of single-digit numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 58; i++)
	{
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
