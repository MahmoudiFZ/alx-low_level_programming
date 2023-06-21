#include "main.h"
/**
 *  print_last_digit - Prints the last digit
 *  of a number
 *  @c: input number as an integer
 *  Return: last digit
 */
int  print_last_digit(int c)
{
	int l;

	l = c % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
