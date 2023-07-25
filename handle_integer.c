#include "main.h"

/**
 * handle_integer - function to handle integers on our _printf.
 * @num: number to print.
 * Return: number of character printed.
 */

int handle_integer(int num)
{
	int count = 0;

	if (num < 0)
	{
		count += 1;
	}
	count += digit_count(num);
	if (num == INT_MIN)
	{
		_putchar('-');
		_putchar('2');
		handle_integer(147483648);
		exit(count);
	}
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num >= 10)
	{
		handle_integer(num / 10);
		handle_integer(num % 10);
	}
	else if (num < 10)
		_putchar(num + '0');
	return (count);
}

/**
 * digit_count - calculat number of digit in a number.
 * @num: the input number.
 * Return: number of digits.
 */
int digit_count(int num)
{
	if (num == 0)
		return (0);
	return (1 + digit_count(num / 10));
}
