#include "holberton.h"
#include <stdio.h>
/**
* jack_bauer - print the numbers from to 98
*
*
* Return: void returns nothing.
*/
void jack_bauer(void)
{
int i;
int j;
for (i = 0; i < 24 ; i++)
{
for (j = 0; j < 60; j++)
{
if (i < 10)
{
putchar('0');
}
printf("%d" , i);
putchar(':');
if (j < 10)
{
putchar('0');
}
printf("%d" , j);
putchar('\n');
}
}
}
