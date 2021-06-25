#include "holberton.h"

/**
* print_line - check the code for Holberton School students.
* @n: integra
* Return: Always 0.
*/

void print_line(int n)

{
	while (n >0)
		{
			putchar (95);
			n--;
		}
	_putchar(10);
}
