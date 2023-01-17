unsigned int ft_strlcpy(unsigned char *a, const unsigned char *b, unsigned int s)
{
	unsigned int i;

	i = 0;
	while (i < s)
	{
		a[i] = b[i];
		++i;
	}
	a[i] = 0;
	return (i);
}
