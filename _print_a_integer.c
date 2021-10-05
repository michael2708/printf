#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * _print_a_integer - Prints a integer
  * @args: A list of variadic arguments
  * Return: The length of the string
  */
int _print_a_integer(va_list args)
{
int count = 1, m = 0;
unsigned int n = 0;
n = va_arg(args, int);
m = n;
if (m < 0)
{
_putchar('-');
m = m * -1;
n = m;
count += 1;
}
while (n > 9)
{
n = n / 10;
count++;
}
_recursion_integer(m);
return (count);
}

/**
  * _recursion_integer - Prints a integer
  * @a: integer to print
  *
  * Return: Nothing
  */
void _recursion_integer(int a)
{
unsigned int t;
t = a;
if (t / 10)
{
_recursion_integer(t / 10);
}
_putchar(t % 10 + '0');
}
