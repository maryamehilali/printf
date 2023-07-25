#include "main.h"

/**
 * handle_string - function to handle strings on the _printf function.
 * @str: the string to be printed.
 * Return: number of character printed.
 */

int handle_string(char *str)
{
	int count = 0;

	if (str == NULL)
	{
		handle_string("(null)");
		count = 6;
		return (6);
	}
	while (*str)
	{
		_putchar(*str);
		count++;
		str++;
	}
	return (count);
}
