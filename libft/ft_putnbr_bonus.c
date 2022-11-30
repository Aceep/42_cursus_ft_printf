/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:33:48 by alycgaut          #+#    #+#             */
/*   Updated: 2022/11/30 13:39:28 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(long long len)
{
	char	c;
	unsigned long long	n;

	
	// if (len == -2147483648)
	// 	write(1, "-2147483648", 11);
	if (len < 0)
	{
		n = -len;
		write(1, "-", 1);
	}
	else 
		n = len;
	if (n >= 10)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write (1, &c, 1);
}
