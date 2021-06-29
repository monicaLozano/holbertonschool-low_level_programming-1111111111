#include "holberton.h"
#include <stdio.h>
/**
* print_rev - check the code for Holberton School students.
* @s: funtion
* Return: Always 0.
*/

void print_rev(char *s)
{
int len = 0;
while (*s != 0)
{
s++;
len++;
}
for (; len >= 0;)
{
if (*s != '\0')
{
_putchar(*s);
}
s--;
len--;
}
_putchar('\n');
}
