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

for (int i = n; i < 99; i++)
{
if (i > 0)
{
printf("%d, ", i);
if (i < 98)
{
printf(", ");
}
}
}
}
