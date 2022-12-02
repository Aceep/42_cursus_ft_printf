/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_d_i_u.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:15:50 by alycgaut          #+#    #+#             */
/*   Updated: 2022/12/02 15:02:14 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_nbr(int n, t_arg **text)
{
	char	*s;

	s = ft_itoa(n);
	//printf("%ld = prec \n", (*text)->precision);
	//if (text)
	//	put_am(text, ft_strlen(s));
	ft_putstr(s);
	if ((*text)->width != 0)
		return (free(s), (*text)->width);
	else
		return (free(s), ft_nbrlen(n));
}

int	put_uns(unsigned int n, t_arg **text)
{
	char	*s;

	s = ft_itoa(n);
	if (text)
		put_am(text, ft_nbrlen(n));
	if ((*text)->width != 0)
		return (ft_putstr(s), free(s), (*text)->width);
	else
		return (ft_putstr(s), free(s), ft_nbrlen(n));
}
