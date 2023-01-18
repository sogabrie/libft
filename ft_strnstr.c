#include "libft.h"

char *ft_strnstr(const char *big, const char *lit, size_t len)
{
	size_t	i;
	size_t	l;
	size_t	f;
	char 	*bi;

	bi = (char *)big;
	l = ft_strlen(lit);
	if (bi == lit || l == 0)
		return (bi);
	i = 0;
	while (bi[i] != 0 && i < len)
	{
		f = 0;
		while (bi[i + f] != 0 && bi[i + f] == lit[f] && lit[f] != 0 && (i + f) < len)
			++f;
		if (f == l)
			return (bi + i);
		++i;
	}
	return (0);
}
