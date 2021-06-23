#include "holberton.h"
/**
* times_table - compute the absolute value
* @i: type number
* Return: absolute value of @n
*/
void times_table(void)
{
int x;
for (int i = 0; i < 10; i++)
{
for (int j = 0; j < 10; j++)
{
x = i * j;
_putchar("%d", x);
if (j < 9)
{
_putchar(',');
_putchar(' ');
if (x < 10)
{
_putchar(' ');
}
}
else
{
_putchar('\n');
}
}
}
}
