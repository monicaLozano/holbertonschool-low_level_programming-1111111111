#include "holberton.h"
/**
* int _isalpha(int c)  - Check alphabetic
* @c: character
* Return: 0
*/
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
