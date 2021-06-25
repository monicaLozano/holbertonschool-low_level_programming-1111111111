#include "holberton.h"

/**
* print_line - check the code for Holberton School students.
*
* Return: Always 0.
*/

void print_line(int n)

{
if (n <= 0)
{
_putchar('\n');
}
else
{
_putchar('_');
print_line(n - 1);
}
}
