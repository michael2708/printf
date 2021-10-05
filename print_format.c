#include "main.h"
#include <stdlib.h>

/**
  * _print_format - Prints a format
  * @format: The format to prints
  * @args: A list of variadic arguments
  *
  * Return: The length of the format
  */
int _print_format(const char *format, va_list args)
{
int count = 0;
int i = 0;
while (format && format[i])
{
if (format[i] == '%')
{
if (format[i + 1] == '\0')
{
return (-1);
}
i++;
while (format[i] == ' ')
{
i++;
}
if (format[i] == '%')
{
count += _putchar(format[i]);
}
if (_validate_char(format[i]) == 0)
{
count = _print_invalid_spec(format[i - 1], format[i], count);
}
else
{
count += _print_spec(format[i], args);
}
}
else
{
count += _putchar(format[i]);
}
i++;
}
return (count);
}

/**
  * _print_spec - Prints a valid id
  * @format: The id to prints
  * @args: A list of variadic arguments
  * Return: The length of the id
  */
int _print_spec(char format, va_list args)
{
int i  = 0, length = 0;
print _types[] = {
{"c", _print_a_char},
{"s", _print_a_string},
{"d", _print_a_integer},
{"i", _print_a_integer},
{"b", _print_int_binary},
{NULL, NULL}
};
while (_types[i].id)
{
if (*_types[i].id == format)
{
length = _types[i].f(args);
}
i++;
}
return (length);
}

/**
  * _print_invalid_spec - Prints a invalid id
  * @prev_format: The previous id of actual id
  * @format: The id to prints
  * @count: The current count before prints invalid ids
  *
  * Return: The current count after prints invalid ids
  */
int _print_invalid_spec(char prev_format, char format, int count)
{
count += _putchar('%');
if (prev_format == ' ')
{
count += _putchar(' ');
count += _putchar(format);
}
else
{
count += _putchar(format);
}
return (count);
}

/**
  * _validate_char - validate the type
  * @_type: character to be comparate
  *
  * Return: 1 if char is equal to a type
  */
int _validate_char(char _type)
{
char _types[] = {'c', 's', 'd', 'i', 'b', '%'};
int i = 0;
while (_types[i])
{
if (_types[i] == _type)
{
return (1);
}
i++;
}
return (0);
}
