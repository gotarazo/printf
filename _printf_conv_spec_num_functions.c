#include "holberton.h"

/**
* get_binary- Converts numbers base 10 in base 2.
* @n: Number to convert
* Return: Binary number
*/

int get_binary(unsigned int n)
{
if (n < 2)
{
_putchar(n + '0');
return (1);
}
return (1 + get_binary(n / 2) + !_putchar(n % 2 + '0'));
}

/**
* _printf_conv_spec_b- Converts and prints arguments in base 10 to base 2
* @args: Arguments to print
* @n: Number to convert
* Return: Number of characters printed
*/

int _printf_conv_spec_b(va_list args)
{
unsigned int n = va_arg(args, unsigned int);
return (get_binary(n));
}
