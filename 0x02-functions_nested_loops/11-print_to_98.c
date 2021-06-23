#include "holberton.h"
#include <stdio.h>
/**
* print_to_98 - print the numbers from to 98
* @n: number
*
* Return: void returns nothing.
*/
{
int i;
clrscr();
printf("n >= 98 :\n");
for (i = n; i <= 98; i++)
{
printf("%d", i);
if (i < 98)
printf(", ");
}
printf("\n");
getch();
}
