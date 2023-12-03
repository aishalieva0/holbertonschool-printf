#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * print_char - prints char
 * @args: argument
 *
 * Return: nothing
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);
	int count = 0, retval;

	retval = _putchar(c);
	if (retval == -1)
		return (-1);
	count++;

	return (count);
}
