#include "main.h"
/**
 * print_sign - used to print sign of a value
 *
 *
 *
 * Return: (0) or (1) depending
 */
int print_sign(int n)

{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
