#include "holberton.h"
/**
* jack_bauer - prints all minutes of the day
* @void: first int to add
*
*/
void jack_bauer(void)
for (int i = 0; i < 24 ; i++)
{
for (int j = 0; j < 60; j++)
{
if (i < 10)
{
_putchar('0');
}
_putchar("%d" ,i);
_putchar(':');
if (j < 10)
{
_putchar('0');
}
_putchar("%d" ,j);
_putchar('\n');
}
