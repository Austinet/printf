#include "main.h"
/**
 * _printf - prints formatted output
 * @format: a pointer to a string
 * Return: length of the string
 */
int _printf(const char *format, ...)
{
int i, num, length = 0;
char *str;
va_list args;
va_start(args, format);
for (i = 0; format[i]; i++)
{
while (format[i] != '%')
{
if (format[i] == '\0')
return (length);
_putchar(format[i]);
length++, i++;
}
switch (format[++i])
{
case 'c':
_putchar((char) va_arg(args, int));
length++;
break;
case 's':
str = va_arg(args, char*);
_puts(str);
length += _strlen(str);
break;
case '%':
_putchar('%');
length++;
break;
case 'd':
case 'i':
num = va_arg(args, int);
print_num(num);
length += sizeof(num) / sizeof(int);
break;
default:
_putchar(format[i]);
}
}
va_end(args);
return (length);
}

