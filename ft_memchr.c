/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:27:24 by sogabrie          #+#    #+#             */
/*   Updated: 2023/01/18 17:35:56 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*a;
	size_t			i;

	i = 0;
	a = (unsigned char *) s;
	while (i < n)
	{
		if (*a == c)
			return (a);
		++a;
		++i;
	}
	return (0);
}
