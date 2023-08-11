#include <stdio.h>

/**
 * main - Prints  all Thepossible combinations for the single digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int numbx;

	for (numbx = 0; numbx <= 9; numbx++)
	{
		putchar((numbx % 10) + '0');
		if (numbx == 9)
			continue;
		
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
