/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:04:56 by alycgaut          #+#    #+#             */
/*   Updated: 2022/12/08 19:20:06 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_hexa(unsigned long long int hex, char c)
{
	int						i;
	//unsigned long long int	hexa;
	char					*s;

	
	//hexa = (unsigned long long)hex;
	s = ft_utoa_base(hex, "0123456789abcdef");
	i = ft_strlen(s);
	if (c == 'X')
		ft_touppercase(s);
	return (ft_putstr(s), free(s), i);
}
