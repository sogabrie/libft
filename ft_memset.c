/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:55:15 by sogabrie          #+#    #+#             */
/*   Updated: 2023/01/18 15:44:32 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *a, int c, size_t len)
{
	while (0 < len)
	{
		--len;
		((unsigned char *)a)[len] = c;
	}
	return (a);
}
