#include "holberton.h"
/**
* print_triangle - check the code for Holberton School students.
* @size: calculare
*/

void print_triangle(int size)
{
int a, b, c;

if (size <= 0)
_putchar('\n');
else
for (a = 0; a < size; a++)
{
for (b = size; b >= a + 2; b--)
_putchar(' ');
for (c = 0; c < a + 1; c++)
_putchar('#');
_putchar('\n');
}
}
