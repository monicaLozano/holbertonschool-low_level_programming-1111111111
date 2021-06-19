#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - Determine if the last digit of a random number is
 * greater than or less than 5, or is zero..
(*
* Return: 0 on success
*/
int main(void)
{
char i = 'a';
char j = 'z';
while (i <= j)
{
putchar(i);
i++;
}
i = 'a';
j = 'z';
while (i <= j)
{
putchar(toupper(i));
i++;
}
putchar('\n');
return (0);
}
