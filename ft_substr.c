#include "libft.h"

char *ft_substr(char const *s, unsigned int  start, size_t len)
{
	char	*ptr;
	char	*cpy;

	cpy = (char *)s;
	cpy = cpy + (start);
	ptr = (char *)ft_calloc(len + 1, 1);
	if (!ptr)
		return (0);
	ft_strlcpy( ptr, cpy, len + 1);
	return (ptr);
}
