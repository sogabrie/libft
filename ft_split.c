/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 20:42:12 by sogabrie          #+#    #+#             */
/*   Updated: 2023/01/21 23:09:21 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	coufri(char const *s, char c, char **ptr, size_t *i)
{
	int	j;

	j = 0;
	if (*i == 1)
	{
		i = 0;
		while (ptr)
			while (ptr[*i])
				free(ptr[*i]);
		free(ptr);
		return ;
	}		
	*i = 0;
	if (s[j--] != c)
		++(*i);
	while(s[++j])
		if (s[j] == c && s[j - 1] != c)
		   ++(*i);
	if (s[j -1] != c)
		++(*i);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr = 0;
	size_t	i;

	i = 2;
	if (s != 0 && c != 0)
		coufri(s, c, ptr, &i);
	printf("splitee = %zu \n",i);
	return (0);
}
