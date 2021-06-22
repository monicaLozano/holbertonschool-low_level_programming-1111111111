#include "holberton.h"
/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
*/
void print_alphabet(void)
{
char i = 'z';
while (i >= 'a')
{
_putchar(i);
i++;
}
_putchar('\n');
return (0);
}
