#include "holberton.h"

/**
* _printf_conv_spec_c- Prints arguments of type char
* @args: Argument to print
* Return: Number of characters printed (1)
*/

int _printf_conv_spec_c(va_list args)
{
char c = va_arg(args, int);
_putchar(c);
return (1);
}

/**
* _printf_conv_spec_s- Prints arguments of type char *
* @args: Arguments to print
* Return: Number of characters printed
*/

int _printf_conv_spec_s(va_list args)
{
int n = 0;
char *str = va_arg(args, char *);

if (str == NULL)
{
write(1, "(null)", 6);
return (6);
}
for (; str[n] != '\0'; n++)
_putchar(str[n]);
return (n);
}

/**
* _printf_conv_spec_P- Prints the percent symbol
* @args: Percent symbol
* Return: Number of characters printed (1)
*/

int _printf_conv_spec_P(va_list __attribute__((unused)) args)
{
char percent = '%';
_putchar(percent);
return (1);
}

/**
* _printf_conv_spec_d- Prints argument of type decimal
* @args: Arguments to print
* Return: Number of characters printed
*/

int _printf_conv_spec_d(va_list args)
{
int num, n = 0, sum = 0, digit, last, div = 1000000000;
unsigned int i;

num = va_arg(args, int);

if (num < 0)
{
_putchar('-');
num *= -1;
n++;
}
i = num;
if (i == 0)
{
_putchar('0');
return (1);
}
while (div > 1)
{
digit = (i / div) % 10;
sum += digit;
if (sum != 0)
{
_putchar(digit + '0');
n++;
}
div = div / 10;
}
last = i % 10;
_putchar(last + '0');
n++;
return (n);
}

/**
* _printf_conv_spec_i- Prints arguments of type integer
* @args: Arguments to print
* Return: Number of characters printed
*/

int _printf_conv_spec_i(va_list args)
{
int num, n = 0, sum = 0, digit, last, div = 1000000000;
unsigned int i;

num = va_arg(args, int);

if (num < 0)
{
_putchar('-');
num *= -1;
n++;
}
i = num;
if (i == 0)
{
_putchar('0');
return (1);
}
while (div > 1)
{
digit = (i / div) % 10;
sum += digit;
if (sum != 0)
{
_putchar(digit + '0');
n++;
}
div = div / 10;
}
last = i % 10;
_putchar(last + '0');
n++;
return (n);
}
