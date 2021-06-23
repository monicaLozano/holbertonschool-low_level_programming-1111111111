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
if (n < 99)
{for (n = n; n < 99; n++)
printf("%d, ", n);
}
else
{
for (n = n; n > 99; n--)
printf("%d, ", n);
printf("%d\n", 99);
}
}
