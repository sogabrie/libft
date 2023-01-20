/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:26:09 by sogabrie          #+#    #+#             */
/*   Updated: 2023/01/20 15:27:39 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	s;

	s = 0;
	while (s < n)
	{
		if (s1[s] > s2[s])
			return (1);
		if (s1[s] < s2[s])
			return (-1);
		if (s1[s] == '\0' || s2[s] == '\0')
			return (0);
		++s;
	}
	return (0);
}
