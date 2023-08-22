#include "main.h"
/**
 * _printf - prints formatted output
 * @format: a pointer to a string
 * Return: length of the string
 */
int _printf(const char *format, ...)
{
int i, length = 0;
char *str;
va_list args;
va_start(args, format);
if (format == NULL)
return (-1);
for (i = 0; format[i]; i++)
{
if (format[i] != '%')
{
_putchar(format[i]);
length++;
}
else
{
if (format[++i] == '\0')
return (-1);
switch (format[i])
{
case 'c':
_putchar((char) va_arg(args, int));
length++;
break;
case 's':
str = va_arg(args, char*);
length += _puts(str);
break;
case '%':
_putchar('%');
length++;
break;
default:
_putchar('%');
_putchar(format[i]);
length += 2;
}
}
}
va_end(args);
return (length);
}

