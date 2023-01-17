unsigned long ft_strlen(const char *a )
{
	int i;

	i = 0;
	while (a[i] != 0)
		++i;
	return (i);
}
