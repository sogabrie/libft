/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 23:32:52 by sogabrie          #+#    #+#             */
/*   Updated: 2022/10/09 13:41:08 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i1;
	unsigned int	i2;
	unsigned int	j;
	unsigned int	g;

	i1 = 0;
	i2 = 0;
	g = 0;
	while (dest[i1] != '\0')
		++i1;
	while (src[i2] != '\0')
		++i2;
	if (size == 0 || size <= i1)
		return (i2 + size);
	j = i1;
	while (g < size - i1 - 1 && src[g] != '\0')
	{
		dest[j] = src[g];
		++j;
		++g;
	}
	dest[j] = '\0';
	return (i1 + i2);
}
