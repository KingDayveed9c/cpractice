#include "main.h"

/**
* _isalpha - checking for alphabets
*@c: input character
*Return: 1 if c is a letter, lowercase or uppercase
*/
int _isalpha(int c)
{
	int isalpha = 0;
	char i, j;

for (i = 'a'; i <= 'z'; i++)
{
	for (j = 'A'; j <= 'Z'; j++)
	{
		if (c == i || c == j)
		isalpha = 1;
	}
}
return (isalpha);
}
