#include "main.h"

/**
*print_sign - prints the sign of a number
*@n: number input
*Return: 1 if positive, elseif -1, else 0.
*/
int print_sign(int n)
{
	int sign = 0;

if (n > 0)
{
	sign = 1;
	_putchar('+');
}
else if (n < 0)
{
	sign = -1;
	_putchar('-');
}
else
{
	sign = 0;
	_putchar('0');
}
return (sign);
}
