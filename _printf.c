#include "holberton.h"

/**
* _printf- Prints a formatted string like printf
* @format: Arguments passed to program
* Return: Return length of string
*/

int _printf(const char *format, ...)
{
int i, n = 0;
va_list args;
int (*f)(va_list);

if (format == NULL)
return (-1);
va_start(args, format);
if (args == NULL)
return (-1);
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%')
{
i++;
if (format[i] == '\0')
return (-1);
while (format[i] == ' ')
i++;
f = get_printf_conv_spec_func(format[i]);
if (f == NULL)
{
_putchar('%');
_putchar(format[i]);
n += 2;
}
else
n += f(args);
}
else
{
_putchar(format[i]);
n++;
}
}
va_end(args);
return (n);
}
