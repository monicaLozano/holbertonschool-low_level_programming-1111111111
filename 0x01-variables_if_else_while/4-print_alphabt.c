#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - determina los numeros
 * greater es cero
(*
* Return: 0 
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
