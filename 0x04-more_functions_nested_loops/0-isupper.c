/**
 * _isupper; checks whether a character is an uppercase alphabet (A-Z) or not.
 * @c: comparate
 * Return: 1  o 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
