#include "libft.h"

void ft_bzero(unsigned char *a, size_t s)
{
	while (0 < s)
	{
		--s;
		a[s] ='\0';
	}
}
