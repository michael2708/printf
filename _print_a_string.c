#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * _print_a_string - Prints a string
  * @args: A list of variadic arguments
  * Return: The length of the string
  */
int _print_a_string(va_list args)
{
char *arg = va_arg(args, char *);
int i = 0;
if (arg != NULL)
{
while (arg[i])
{
_putchar(arg[i]);
i++;
}
return (i);
}
_putchar('(');
_putchar('n');
_putchar('u');
_putchar('l');
_putchar('l');
_putchar(')');
return (6);
}
