#include <unistd.h>
#include "main.h"
/**
 * _putchar - print characters to standard output
 * @c: parameter of char datatype
 * Return: 0
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
