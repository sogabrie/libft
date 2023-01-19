/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 20:42:12 by sogabrie          #+#    #+#             */
/*   Updated: 2023/01/19 23:21:04 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t siz_m(char **ptr, char const *s2, char c)
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
	printf("i = %lu \n",i);
	ptr = (char **)malloc(i * sizeof(char *));
	if (!ptr)
		return (1);
	ft_bzero(ptr, i);
	return (0);
}

size_t mas_mal(char **ptr, char const *s2,char * s3, size_t i)
{
	size_t j;

	j = s3 - s2;
	printf("%lu \n",i);
	ptr[i] = (char *)malloc((j + 1) * sizeof(char));
	printf("sssssssss");
	if (!ptr[i])
		return (2);
	printf("777\n");
	ft_strlcpy(ptr[i], s2, j);
	return (0);
}


size_t mas(char **ptr, char const *s2, char c)
{
	size_t	i;
	char 	*s3;

	i = 0;
	while (*s2)
	{
		s3 = ft_strchr(s2, c);
		if (*s3)
		{
			if (!mas_mal(ptr, s2, s3, i))
					return (2);
			s2 = s3;
			if (ptr[i])
				++i;
		}
		else
			if (!mas_mal(ptr, s2, s3, i))
				return (2);
	}
	return (0);
}

void cl(char **ptr, size_t f)
{
	size_t	i;

	printf("666\n");
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

char **ft_split(char const *s, char c)
{
	size_t	f;
	char const	*s2;
	char	**ptr;

	ptr = NULL;
	s2 = s;
	printf("111\n");
	f  = siz_m(ptr, s2, c);
	printf("222\n");
	s2 = s;
	f = mas(ptr, s2, c);
	printf("3333\n");
	if (f)
	{
		cl(ptr, f);
		return (0);
	}
	printf("444\n");
	return (ptr);
}
