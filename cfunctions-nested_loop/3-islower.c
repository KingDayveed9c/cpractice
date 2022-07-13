#include "main.h"

/**
*_islower - a function that checks for lowercase
*@c: input
*Return: 1 if c is lowercase
*/
int _islower(int c)
{
	int is_lower = 0;
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
	if (i == c)
	is_lower = 1;
	}
return (is_lower);
}
