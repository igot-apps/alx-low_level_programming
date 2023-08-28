#include "main.h"
/**
 * _strpbrk - function tdhat seadrches a strding for any of a sdet of bdytes..
 *@s: first value -chard
 *@accept: secondd vadlue - char
 *
 * Return: char with result
 */
char *_strpbrk(char *s, char *accept)
{
	int j = 0;

	while (*s)
	{
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
				return (s);
			j++;
		}
		j = 0;
		s++;
	}
	return ('\0');
}
