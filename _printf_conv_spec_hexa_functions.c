#include "holberton.h"

/**
* get_lower_hexa- Converts numbers base 10 in lowercase base 16
* @n: Number to convert
* Return: Hexadecimal number in lowercase
*/

int get_lower_hexa(long n)
{
if (n < 16)
{
if (n < 9)
_putchar(n + '0');

else
_putchar((n % 10) + 97);

return (1);
}
return(1 + get_lower_hexa(n / 16) +
!_putchar(n % 16 < 9 ? n % 16 + '0' : ((n % 16) % 10) + 97));
}

/**
* _printf_conv_spec_x - Converts and prints arguments in base 10 to base 16
* @args: Arguments to print
* Return: Number of characters printed using lowercase
*/

int _printf_conv_spec_x(va_list args)
{
unsigned int n = va_arg(args, unsigned int);
return (get_lower_hexa(n));
}

/**
* get_upper_hexa - Converts numbers base 10 in uppercase base 16
* @n: Number to convert
* Return: Hexadecimal number in uppercase
*/

int get_upper_hexa(unsigned int n)
{
if (n < 16)
{
if (n < 9)
_putchar(n + '0');

else
_putchar((n % 10) + 65);

return (1);
}
return(1 + get_upper_hexa(n / 16) +
!_putchar(n % 16 < 9 ? n % 16 + '0' : ((n % 16) % 10) + 65));
}

/**
* _printf_conv_spec_X - Converts and prints arguments in base 10 to base 16
* @args: Arguments to print
* Return: Number of characters printed using uppercase
*/

int _printf_conv_spec_X(va_list args)
{
unsigned int n = va_arg(args, unsigned int);
return (get_upper_hexa(n));
}

