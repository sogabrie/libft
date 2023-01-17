#include "libft.h"

size_t ft_strlcpy(char *a, const char *b, size_t s)
{
	size_t i;

	i = 0;
	while (i < s)
	{
		a[i] = b[i];
		++i;
	}
	a[i] = 0;
	return (i);
}
