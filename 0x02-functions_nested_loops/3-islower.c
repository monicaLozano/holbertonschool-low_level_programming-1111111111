#include "holberton.h"
/**
* _islower - Return alphabet
*
* @c: character
*
* Retrun: 0
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
