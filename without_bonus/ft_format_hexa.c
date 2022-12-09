/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:04:56 by alycgaut          #+#    #+#             */
/*   Updated: 2022/12/09 17:10:08 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_hexa(unsigned int hex, char c)
{
	int						i;
	char					*s;

	s = ft_utoa_base(hex, "0123456789abcdef");
	i = ft_strlen(s);
	if (c == 'X')
		ft_touppercase(s);
	return (ft_putstr(s), free(s), i);
}
