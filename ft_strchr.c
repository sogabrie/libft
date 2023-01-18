/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:49:27 by sogabrie          #+#    #+#             */
/*   Updated: 2023/01/18 16:04:30 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *s, int c)
{
	char *a;
	
	a = (char *) s;
	while (a != 0)
	{
		if (*a == c)
			return (a);
		++a;
	}
	return (0);
}
