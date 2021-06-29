#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - check the code for Holberton School students.
 * @s: descrition of the paramet
 * Return: Always 0.
 */

int _strlen(char *s)
{
int len = 0;
while (*s != 0)
{
s++;
len++;
}
return (len);
}
