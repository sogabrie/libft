/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 20:42:12 by sogabrie          #+#    #+#             */
/*   Updated: 2023/01/22 22:26:48 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	coufri(char const *s, char c, char **ptr, size_t *i)
{
	int	j;

	j = 0;
	if (*i == 5)
	{
		j = 0;
		while (ptr)
			while (ptr[j])
				free(ptr[j++]);
		free(ptr);
		return ;
	}		
	*i = 0;
	if (s[j--] != c)//&& s[j] != 0)
		++(*i);
	while(s[++j])
		if (s[j] == c && s[j - 1] != c)
		   ++(*i);
	if (s[j -1] != c)
		++(*i);
}

size_t mal(char **ptr, char *s, char *s2, size_t j)
{
	size_t i;

	i = s2 - s;
	ptr[j] = malloc((i + 1) * sizeof(char));
	if (!ptr[j])
		return (5);
	ft_strlcpy(ptr[j], s, i + 1);
	if (!ptr[j])
		return (5);
	return (0);
}


size_t	mas2(char **ptr, char *s, char c)
{
	char	*s2;
	size_t	j;

	j = 0;
	s2 = s;
	while (*s)
	{
		if ((*s2 == c || *s2 == 0) && *(s2 - 1) != c && !(s2 == s))
		{
			if(mal(ptr, s, s2, j))
				return (5);
			if (!*s2)
			   return (0);	
			s = ++s2;
			++j;
		}
		else
		{
			if (*s2 == 0)
				s = s2;
			else
			{
				++s2;
				if (*(s2 - 1) == c)
					s = s2;
			}
		}
	}
	return (0);
}

size_t	mas(char **ptr, const char *s, char c, size_t i)
{
	char	*s1;
	char	*s2;

	if (i == 1)
	{
		ptr[0] = malloc(1);
		if (!ptr[0])
			return (5);
		ptr[0] = 0;
		return (0);
	}
	s1 = (char *) s;
	if (c == 0)
	{
		s2 = s1;
		s1 = s2 + ft_strlen(s) + 1;
		return (mal(ptr, s2, s1, 0));
	}
	return (mas2(ptr, s1, c));
}

char	**ft_split(char const *s, char c)
{
	char	**ptr = 0;
	size_t	i;
	size_t	j;

	i = 1;
	j = 0;
	if (s != 0 && *s != 0) //&& c != 0)
		coufri(s, c, ptr, &i);
	ptr = (char **)ft_calloc(i, (sizeof(char *)));
	if (!ptr)
		return (0);
	while (j < i)
		ptr[j++] = 0;
	if (i != 1)
		j = mas(ptr, s, c, i);
	if (j == 5)
	{
		coufri(s, c, ptr, &j);
		return (0);
	}
	return (ptr);
}
