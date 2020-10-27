#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
* struct conv_spec- Struct function that matches the @spec
* @spec: Conversion specifier symbol
* @func: Associated function 
*/

typedef struct conv_spec
{
char *spec;
int (*func)(va_list);
} conv_spec_t;

int _putchar(char c);
int _printf(const char *format, ...);
int(*get_printf_conv_spec_func(char spec))(va_list);

int _printf_conv_spec_c(va_list args);
int _printf_conv_spec_s(va_list args);
int _printf_conv_spec_P(va_list args);
int _printf_conv_spec_d(va_list args);
int _printf_conv_spec_i(va_list args);
int _printf_conv_spec_b(va_list args);
int _printf_conv_spec_u(va_list args);
int _printf_conv_spec_o(va_list args);
int _printf_conv_spec_x(va_list args);
int _printf_conv_spec_X(va_list args);
int _printf_conv_spec_S(va_list args);
int _printf_conv_spec_p(va_list args);
int _printf_conv_spec_r(va_list args);
int _printf_conv_spec_R(va_list args);

int get_binary(unsigned int n);

#endif
