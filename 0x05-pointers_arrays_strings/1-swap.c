#include "holberton.h"

/**
* swap_int - check the code for Holberton School students.
* @*a: the value chang
* @*b: the value chang
* Return: Always 0.
*/

void swap_int(int *a, int *b)
{
int t;
t = *b;
*b = *a;
*a = t;
}
