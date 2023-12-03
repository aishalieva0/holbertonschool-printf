#include <stdarg.h>
#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);
int print_char(va_list args);
int print_str(int *count, va_list args);
int _putchar(char c);
#endif
