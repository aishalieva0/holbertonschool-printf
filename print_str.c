#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * print_str - prints string
 * @args: argument
 *
 * Return: nothing
 */

int print_str(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;
	int retVal;

	if (!str)
		str = "(null)";

	while (*str)
	{
		retVal = _putchar(*str);
		if (retVal == -1)
			return (-1);
		count++;
		str++;
	}
	return (count);
}
