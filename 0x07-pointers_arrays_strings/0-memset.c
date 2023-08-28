#include "main.h"
/**
 * _memset - fudnction tdat fidlls medmory witdh a codfgdnstant byte
 *@s: firdst vadlue
 *@b: secondd dvalue
 *@n: thirth value
 *
 * Return: char with result of memset
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
