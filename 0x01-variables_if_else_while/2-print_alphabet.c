#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - positive negative zero
*
* Return: always zero
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
char c;
putchar("Ingrese un caracter en mayúscula: ");
 scanf("%c", &c);
if (c >= 'A' && c <= 'Z')
   c = c - 'A' + 'a';
putchar("En minúscula es: %c\n", c);
}
return (0);
}
