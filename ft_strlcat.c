#include "libft.h"

size_t ft_strlcat(char *a, const char *b, size_t s)
{
	size_t	i;
	int		f;

	i = ft_strlen(a);
	while (i < s - 1)
	{
		a[i] = b[f];
		++i;
		++f;
	}
	a[i] = 0;
	return (++i);
}
