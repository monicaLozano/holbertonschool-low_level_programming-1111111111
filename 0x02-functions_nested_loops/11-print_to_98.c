#include "holberton.h"
#include <stdio.h>
/**
* print_to_98 - print the numbers from to 98
* @n: number
*
* Return: void returns nothing.
*/
void print_to_98(int n)
{
int n;
clrscr();
printf("n >= 98 :\n");
for (n = n; n <= 98; i++)
{
printf("%d", n);
if (n < 98)
printf(", ");
}
printf("\n");
getch();
}
