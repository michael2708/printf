#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

/**
 * struct types - struct
 * @id: identifier of type to print (e.g. c means char)
 * @f: ptr to functions that print according to identifier (e.g. print_c)
 */

typedef struct types
{
char *id;
int* (*f)(va_list args);
} print;
int _putchar(char c);
int _printf(const char *format, ...);
#endif
