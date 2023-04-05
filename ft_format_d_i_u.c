/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_d_i_u.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:15:50 by alycgaut          #+#    #+#             */
/*   Updated: 2022/12/08 18:11:08 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_nbr(int n)
{
	char	*s;
	int		len;

	s = ft_itoa(n);
	len = ft_strlen(s);
	return (ft_putstr(s), free(s), len);
}

int	put_uns(unsigned int n)
{
	char	*s;
	int		len;

	s = ft_utoa(n);
	len = ft_strlen(s);
	return (ft_putstr(s), free(s), len);
}
