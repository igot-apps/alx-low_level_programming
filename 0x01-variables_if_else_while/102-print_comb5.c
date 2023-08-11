#include <stdio.h>

/**
 * main - a simple program thatprints all possible combinations of two two-digit numbers
 * combinations of two digit integers no duplicates is allowed .
 *
 * Return: 0 on success
 */
int main(void)
{
	int ifirstx;
	int i;
	int jfirsty;
	int j;

	for (ifirstx = 48; ifirstx < 58; ifirstx++)
	{
		for (i = 48; i < 58; i++)
		{
			j = i + 1;
			jfirsty = ifirstx;
			for (; jfirsty < 58; jfirsty++)
			{
				for (; j < 58; j++)
				{
					putchar(ifirstx);
					putchar(i);
					putchar(' ');
					putchar(jfirsty);
					putchar(j);
					if (ifirstx != 57 || jfirsty != 57 || i != 56 || j != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
				j = 48;
			}
		}
	}
	putchar('\n');
	return (0);
}
