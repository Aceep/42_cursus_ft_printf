/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:04:56 by alycgaut          #+#    #+#             */
/*   Updated: 2022/12/01 19:03:11 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_hexa(int hex, char c, t_arg **text)
{
	int				i;
	long long		hexa;
	char			*s;

	hexa = (long long) hex;
	s = ft_itoa_base(hexa, "0123456789abcdef");
	i = ft_strlen(s);
	if (c == 'X')
		ft_touppercase(s);
	if (text)
		put_am(text, i);
	if ((*text)->width != 0)
		return (ft_putstr(s), free(s), (*text)->width);
	else
		return (ft_putstr(s), free(s), i);
}
