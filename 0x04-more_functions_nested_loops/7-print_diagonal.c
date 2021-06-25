#include "holberton.h"

/**
 * print_diagonal - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
		{
			for (a = 0 ; a < n ; a++)
				{
					for (b = 0 ; b < a ; b++)
						{
							_putchar(' ');
						}
					_putchar(92);
					_putchar('\n');
				}
		}
	else
		{
			_putchar('\n');
		}
}
