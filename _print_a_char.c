#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * _print_a_char - Prints a char
  * @args: A list of variadic arguments
  * Return: The length of the character
  */
int _print_a_char(va_list args)
{
_putchar(va_arg(args, int));
return (1);
}
