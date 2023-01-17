#include "libft.h"
unsigned char *ft_memmove(unsigned char *a, const unsigned char *b, size_t s)
{
	size_t i;

	if (!a && !b)
		return (0);
	i = 0;
	while ( i < s )
	{
		a[i] = b[i];
		++i;
	}
	return (a);
}
