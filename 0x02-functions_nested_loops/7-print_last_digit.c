#include "holberton.h"
/**
* print_last_digit - print last digit
* @n: type number
* Return: last digit
*/
int print_last_digit(int n)
{
n = n % 10;
if (n < 0)
n = -n;
_putchar(n + '0');
return (n);
}

