#include "holberton.h"
/**
* print_last_digit - print last digit
* @n: type number
* Return: last digit
*/
int print_last_digit(int n)
{
if (n < 0)
n = n * -1;
_putchar((n % 10) + '0');
return (n % 10);
}
