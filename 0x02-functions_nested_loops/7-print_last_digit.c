#include "main.h"
/**
 * print_last_digit - prints last digit
 * @n: function parameter
 *
 * Return: last digit
*/
int print_last_digit(int n)
{
	int l;

	if (n < 0)
	{
		l = -(n % 10);
		_putchar(l + '0');
		return (l);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		l = n % 10;
		_putchar(l + '0');
		return (l);
	}
}
