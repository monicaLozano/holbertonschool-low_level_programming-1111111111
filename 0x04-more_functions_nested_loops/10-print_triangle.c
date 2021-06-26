#include "holberton.h"
/**
* print_triangle - check the code for Holberton School
*
* @size: Always 0.
*/

void print_triangle(int size)
{
int size = 0;
int a, b;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (a = 1 ; a < size; a++)
{
b = a;
while (b > 0)
{
_putchar ('#');
b--;
}
_putchar ('\n');
}
}
}
