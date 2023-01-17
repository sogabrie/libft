unsigned char *ft_memmove(unsigned char *a, const unsigned char *b, unsigned int s)
{
	unsigned int i;

	i = 0;
	while ( i < s )
	{
		a[i] = b[i];
		++i;
	}
	return (a);
}
