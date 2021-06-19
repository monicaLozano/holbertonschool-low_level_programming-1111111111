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
 char m = 'a';
 while (m <= 'z')
{
putchar(m);
m++;
}
 putchar('\n');
}
return (0);
}
