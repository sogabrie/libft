/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:24:19 by sogabrie          #+#    #+#             */
/*   Updated: 2023/01/22 21:31:51 by sogabrie         ###   ########.fr       */
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
	if (!len1 || !len2)
		return (0);
	ptr = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (!ptr)
		return (0);
	ft_strlcpy(ptr, s1, len1 + 1);
	ft_strlcat(ptr, s2, len1 + len2 + 1);
	return (ptr);
}
