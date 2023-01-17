void ft_bzero(unsigned char *a, unsigned int s)
{
	while (0 < s)
	{
		--s;
		a[s] ='\0';
	}
}
