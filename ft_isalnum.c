/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:09:49 by sogabrie          #+#    #+#             */
/*   Updated: 2023/01/20 15:10:05 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int a )
{
	if ((a > 64 && a < 91) || (a > 96 && a < 123) || (a > 47 && a < 58))
		return (1);
	else
		return (0);
}
