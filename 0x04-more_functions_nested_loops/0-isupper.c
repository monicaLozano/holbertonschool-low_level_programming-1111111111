/**
 * _isupper; checks whether a character is an uppercase alphabet (A-Z) or not.
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
	int c;

	c = 'A';
	_putchar("%c: %d\n", c, _isupper(c));
	c = 'a';
	_putchar("%c: %d\n", c, _isupper(c));
	return (0);
}
