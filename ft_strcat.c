#include "libft.h"

unsigned int ft_strcat(unsigned char * a, const unsigned char *b, unsigned int s)
{
	unsigned int i;
	int			 f;

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
