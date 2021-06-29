#include "holberton.h"
#include <stdio.h>
/**
* _puts - check the code for Holberton School students.
* @str: funtion
* Return: Always 0.
*/

void _puts(char *str)
{
for (; *str != '\0';)
{
_putchar(*str);
str++;
}
_putchar('\n');
}
