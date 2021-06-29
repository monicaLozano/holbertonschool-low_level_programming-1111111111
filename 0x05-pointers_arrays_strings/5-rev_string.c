#include "holberton.h"
#include <stdio.h>
/**
* rev_string - check the code for Holberton School students.
* @s: funtion
* Return: Always 0.
*/

void rev_string(char *s)
{
int len = 0;
for (; *s != '\0';)
{
_putchar(*s);
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
