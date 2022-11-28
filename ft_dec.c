/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dec.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:15:50 by alycgaut          #+#    #+#             */
/*   Updated: 2022/11/28 11:40:20 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_nbr(unsigned int n)
{
	ft_putnbr(n);
	return (ft_nbrlen(n));
}

int	put_char(unsigned int c)
{
	ft_putchar(c);
	return (1);
}

void	put_str(char *s)
{
	ft_putstr(s);
}
