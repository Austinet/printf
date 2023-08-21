#include "main.h"
/**
 * puts - print a string to standard output
 * @str: string to be printed
 * Return: nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
