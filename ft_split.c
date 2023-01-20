/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 20:42:12 by sogabrie          #+#    #+#             */
/*   Updated: 2023/01/20 15:21:43 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	siz_m(char const *s2, char c)
{
	size_t	i;

	i = 0;
	while (*s2)
	{
		if (*s2 == c)
			++i;
		++s2;
	}
	i += 2;
	return (i);
}

size_t	mas_mal(char **ptr, char const *s2, char *s3, size_t i)
{
	size_t	j;

	if (!s3)
		j = ft_strlen(s2);
	else
		j = s3 - s2;
	ptr[i] = malloc(j);
	if (!ptr[i])
		return (2);
	ft_strlcpy(ptr[i], s2, j + 1);
	return (0);
}

size_t	mas(char **ptr, char const *s2, char c)
{
	size_t	i;
	char	*s3;

	i = 0;
	while (s2)
	{
		s3 = ft_strchr(s2, c);
		if (s3)
		{
			if (mas_mal(ptr, s2, s3, i))
				return (2);
			++s3;
			s2 = s3;
			if (ptr[i][0])
				++i;
		}
		else
		{
			if (mas_mal(ptr, s2, s3, i))
				return (2);
			s2 = 0;
		}
	}
	return (0);
}

void	cl(char **ptr, size_t f)
{
	size_t	i;

	i = 0;
	if (f == 1)
		free(ptr);
	else
	{
		while (!ptr[i])
			free(ptr[i++]);
		free(ptr);
	}
}

char	**ft_split(char const *s, char c)
{
	size_t		f;
	size_t		i;
	char const	*s2;
	char		**ptr;

	s2 = s;
	f = 0;
	i = siz_m(s2, c);
	ptr = malloc(i * sizeof(char *));
	if (!ptr)
		f = 1;
	s2 = s;
	if (!f)
		f = mas(ptr, s2, c);
	if (f)
	{
		cl(ptr, f);
		return (0);
	}
	return (ptr);
}
