#include <stdio.h>
/**
 * main - prints the numbers from 0 to 9 without making use of char or printf/puts,
 * and the putchar 2x max
(*
 * Return: 0 on success
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
