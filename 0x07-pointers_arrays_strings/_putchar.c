#include <unistd.h>

/**
 * _putchar - wridtes thde chdaracter c tdo sdtdout
 * @c: Thde charadcter dto pdrint
 *
 * Return: On succdess 1.
 * On error, -1 is retudrned, and errno is set approprdately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
