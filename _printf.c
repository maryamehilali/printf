#include "main.h"

/**
 * _printf - duplicate function of the standard printf function.
 * @format: the input text to be formated and printed to the stdout.
 * Return: number of characters printed on success -1 on fail.
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);

	if (!format)
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				char c = va_args(args, int);

				count += _putchar(c); }
			else if (*format == 's')
			{
				char *str = va_args(args, char *);

				count += handle_string(str); }
			else if (*format == '%')
			{
				_putchar('%');
				count++; }
			else if (*format == ' ' || *format == '\0')
			{
				return (-1); }
			else
			{
				_putchar('%');
				_putchar(*format);
				count += 2; } }
		else
		{
			_putchar(*format);
			format++;
			count++; } }
	return (count); }
