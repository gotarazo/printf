#include "holberton.h"

/**
* _printf_conv_spec_S- Print argument non-printable char to ASCII hexa-values
* @args: Arguments to print
* Return: Number of characters printed
*/

int _printf_conv_spec_S(va_list args)
{
char *str = va_arg(args, char *);
int n = 0, i = 0;

if (str == NULL)
{
write(1, "(null)", 6);
return (6);
}
while (str[i] != '\0' && str[i] > 0)
{
if (str[i] >= 32 && str[i] < 127)
{
_putchar(str[i]);
n++;
}
else
{
_putchar('\\');
_putchar('x');
n += 2;
if (str[i] < 16)
{
_putchar('0');
n++;
}
n += get_upper_hexa(str[i]);
}
i++;
}
return (n);
}

/**
* _printf_conv_spec_p- Prints a pointer adress
* @args: Arguments to print
* Return: Number of characters printed
*/

int _printf_conv_spec_p(va_list args)
{
long adress = va_arg(args, long);

if (adress == 0)
{
write(1, "(nil)", 5);
return (5);
}
if (adress < 0)
{
write(1, "0xffffffffffffffff", 18);
return (18);
}
_putchar('0');
_putchar('x');
return (get_lower_hexa(adress) + 2);
}

/**
* _printf_conv_spec_r- Prints reversed argument of type char *
* @args: Arguments to print
* Return: Number of characters printed
*/

int _printf_conv_spec_r(va_list args)
{
char *str = va_arg(args, char *);
int n = 0, length = 0;

if (str == NULL)
{
write(1, "(null)", 6);
return (6);
}
while (str[length] != '\0')
{
length++;
n++;
}
length--;

while (length >= 0)
{
_putchar(str[length]);
length--;
}
return (n);
}

/**
* _printf_conv_spec_R- Prints argument of type char * after ROT13 encryption
* @args: Arguments to print
* Return: Number of characters printed
*/

int _printf_conv_spec_R(va_list args)
{
char *str = va_arg(args, char *);
int n;

if (str == NULL)
{
write(1, "(null)", 6);
return (6);
}
for (n = 0; str[n] != '\0'; n++)
{
if (str[n] >= 110 && str[n] <= 122)
_putchar(str[n] - 13);
else if (str[n] >= 97 && str[n] <= 109)
_putchar(str[n] + 13);
else if (str[n] >= 78 && str[n] <= 90)
_putchar(str[n] - 13);
else if (str[n] >= 65 && str[n] <= 77)
_putchar(str[n] + 13);
else
_putchar(str[n]);
}
return (n);
}
