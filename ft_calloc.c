#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	void	*pt;

	pt = malloc(nmemb * size);
	if (!pt)
		return (0);
	ft_bzero(pt,nmemb);
	return (pt);
}
