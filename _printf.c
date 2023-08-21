#include "main.h"
/**
 * _printf - prints formatted output
 * @format: a pointer to a string
 * Return: length of the string
 */
int _printf(char *format, ...)
{
int i, length = 0, char *str;
va_list args;
va_start(args, format);

for (i = 0; format[i]; i++)
{
while (format[i] != '%')
{
if (format[i] == '\0')
return (length);

_putchar(format[i]);
length++;
i++;
}
i++;

if (format[i] == 'c')
{
_putchar((char) va_arg(args, int));
length++;
}
else if (format[i] == 's')
{
str = va_arg(args, char*);
_puts(str);
length += _strlen(str);
}
else if (format[i] == '%')
{
_putchar('%');
length++;
}
else
{
_putchar(format[i]);
}
}
va_end(args);
return (length);
}
