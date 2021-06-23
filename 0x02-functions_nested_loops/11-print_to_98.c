#include "holberton.h"
#include <stdio.h>
/**
* print_to_98 - print the numbers from to 98
* @n: number
*
* Return: void returns nothing.
*/
void print_to_98(int n)
{
int i;
if (n < 99)
{
for (i = n; i < 99; i++)
{
printf("%d", i);
if (i < 98)
{
printf(", ");
}
}
}
else
{
for (i = n; i >= 98; i--)
{
printf("%d", i);
if (i > 98)
{
printf(", ");
}
}
}
putchar('\n');
}
