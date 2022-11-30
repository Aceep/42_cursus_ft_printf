/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:04:56 by alycgaut          #+#    #+#             */
/*   Updated: 2022/11/30 18:04:57 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_hexa(int hex, char c)
{
	int				i;
	long long		hexa;
	char			*s;

	hexa = (long long) hex;
	s = ft_itoa_base(hexa, "0123456789abcdef");
	i = ft_strlen(s);
	if (c == 'X')
		ft_touppercase(s);
	return (ft_putstr(s), free(s), i);
}
