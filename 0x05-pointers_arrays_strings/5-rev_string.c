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
int i = 0;
char j;
for (; *s != '\0';)
{
len++;
s++;
}
len--;
for (; i <= len;)
{
s--;
i++;
}
i = 0;
for (; i < len;)
{
j = s[len]
s[len] = s[i];
s[i] = j;
i++;
len--;
}
_putchar('\n');
}
