/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_d_i_u.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:15:50 by alycgaut          #+#    #+#             */
/*   Updated: 2022/12/02 16:27:54 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_nbr(int n)
{
	char	*s;

	s = ft_itoa(n);
	return (ft_putstr(s), free(s), ft_nbrlen(n));
}

int	put_uns(unsigned int n)
{
	char	*s;

	s = ft_itoa(n);
	return (ft_putstr(s), free(s), ft_nbrlen(n));
}
