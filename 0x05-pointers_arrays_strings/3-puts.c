#include "holberton.h"
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
int i=0;
while (*str != 0)
{
str++;
_putchar(str[i]);
i++;
}
return (0);
}
