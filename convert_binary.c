#include "main.h"

/**
 * convert_binary - fuction to convert integer into binary.
 * @num: integer to convert.
 * Return: number of digits in the binary number.
 */
int convert_binary(int num)
{
	int i = 0, count = 0;
	int binary_reverse[32];

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num > 0)
	{
		binary_reverse[i] = num % 2;
		num = num / 2;
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(binary_reverse[i] + '0');
		i--;
		count++;
	}
	return (count);
}
