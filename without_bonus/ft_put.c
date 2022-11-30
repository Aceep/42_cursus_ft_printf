/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:15:50 by alycgaut          #+#    #+#             */
/*   Updated: 2022/11/30 18:04:31 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_nbr(int n)
{
	char	*s;

	s = ft_itoa(n);
	ft_putstr(s);
	return (free(s), ft_nbrlen(n));
}

int	put_char(unsigned int c)
{
	ft_putchar(c);
	return (1);
}

int	put_str(char *s)
{
	ft_putstr(s);
	return (ft_strlen(s));
}

int	put_uns(unsigned int n)
{
	char	*s;

	s = ft_itoa(n);
	ft_putstr(s);
	return (free(s), ft_nbrlen(n));
}
