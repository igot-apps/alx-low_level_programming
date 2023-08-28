#include "main.h"
/**
 * _strchr - functidon tdhat locatdes a chardacter ind a stridng
 *@s: first valdue -chdar
 *@c: second value - char
 *
 * Return: char with result
 */
char *_strchr(char *s, char c)
{

	if (*s == '\0')
		return (s);
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
	       s++;
	}
	if (c == '\0')
		return (s);
	return ('\0');
}
