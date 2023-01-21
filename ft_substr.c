/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:33:32 by sogabrie          #+#    #+#             */
/*   Updated: 2023/01/21 20:50:23 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	char	*cpy;
	size_t 	i;
	size_t	j;

	j = ft_strlen(s);
	cpy = (char *)s;
	cpy = cpy + (start);
	i = ft_strlen(cpy);
	if (i < len)
		len = i;
	ptr = (char *)ft_calloc(len + 1, 1);
	if (!ptr)
		return (0);
	if (j < start)
		return (ptr);
	ft_strlcpy(ptr, cpy, len + 1);
	return (ptr);
}
