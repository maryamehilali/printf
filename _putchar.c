#include "main.h"

/**
 * _putchar - function to print a character.
 * @c: the chacater to print.
 * Return: Always 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
