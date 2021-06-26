#include "holberton.h"
/**
* void print_triangle(int size) - check the code for Holberton School
*
* sizen: Always 0.
*/

void print_triangle(int size)
{
int lines, spaces;
if (n <= 0)
{
_putchar('\n');
}
for (lines = 0; lines < n; lines++)
for (spaces = 0 ; spaces < lines; spaces++)
{
_putchar(' ');
}
_putchar ('\\');
_putchar ('\n');
}
}
int main(void)
print_triangle(2);
print_triangle(10);
print_triangle(1);
print_triangle(0);
return (0);
}
