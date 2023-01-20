/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:24:19 by sogabrie          #+#    #+#             */
/*   Updated: 2023/01/20 15:24:20 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*ptr;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	ptr = (char *)ft_calloc(len1 + len2 + 1, 1);
	if (!ptr)
		return (0);
	ft_strlcpy(ptr, s1, len1 + 1);
	ft_strlcat(ptr, s2, len1 + len2 + 1);
	return (ptr);
}
