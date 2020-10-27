#include "holberton.h"

/**
* get_printf_conv_spec_func- Identify the function that matches the spec
* @spec: Conversion specifier symbol
* Return: Associated function
*/

int (*get_printf_conv_spec_func(char spec))(va_list)
{
int i;

conv_spec_t f[] = {
{"c", _printf_conv_spec_c},
{"s", _printf_conv_spec_s},
{"%", _printf_conv_spec_P},
{"d", _printf_conv_spec_d},
{"i", _printf_conv_spec_i},
{"b", _printf_conv_spec_b},
{"u", _printf_conv_spec_u},
{"o", _printf_conv_spec_o},
{"x", _printf_conv_spec_x},
{"X", _printf_conv_spec_X},
{"S", _printf_conv_spec_S},
{"p", _printf_conv_spec_p},
{"r", _printf_conv_spec_r},
{"R", _printf_conv_spec_R},
{NULL, NULL}
};
for (i = 0; f[i].spec != NULL; i++)
{
if (spec == *f[i].spec)
return (f[i].func);
}
return (NULL);
}
