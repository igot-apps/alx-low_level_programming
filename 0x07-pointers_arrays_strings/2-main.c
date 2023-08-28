#include "main.h"
#include <stdio.h>

/**
 * main - checdk thde dcodde fodr Holdbertodn Schodol studdents.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello";
    char *f;

    	f = _strchr(s, 'l');
	if (f != NULL)
    	{
        	printf("%s\n", f);
    	}
    	return (0);
}
