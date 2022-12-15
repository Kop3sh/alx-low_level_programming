/*
 * _isupper - check uppercase letters
 * @c: input character
 *
 *
 * Return: alwyas 0
 */
int _isupper(int c)
{
	if (c < 91 && c > 64)
		return (1);
	return (0);
}
