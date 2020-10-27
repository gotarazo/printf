#include "holberton.h"

/**
* get_binary- Converts numbers base 10 in base 2
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

/**
* _printf_conv_spec_u- Prints argument of type unsigned int
* @args: Argument to print
* Return: Number of characters printed
*/

int _printf_conv_spec_u(va_list args)
{
int n = 0, sum = 0, digit, last, div = 1000000000;
unsigned int num = va_arg(args, unsigned int);

while (div > 1)
{
digit = (num / div) % 10;
sum += digit;
if (sum != 0)
	{
_putchar(digit + '0');
n++;
}
div = div / 10;
}
last = num % 10;
_putchar(last + '0');
n++;

return (n);
}

/**
* get_octal- Converts numbers base 10 in base 8
* @n: Number to convert
* Return: Octal number
*/

int get_octal(unsigned int n)
{
if (n < 8)
{
_putchar(n + '0');
return (1);
}
return (1 + get_octal(n / 8) + !_putchar(n % 8 + '0'));
}

/**
* _printf_conv_spec_o- Converts and prints arguments in base 10 to base 8
* @args: Argument to print
* @n: Number to convert
* Return: Number of characters printed
*/

int _printf_conv_spec_o(va_list args)
{
unsigned int n = va_arg(args, unsigned int);
return (get_octal(n));
}
