/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 18:22:06 by alycgaut          #+#    #+#             */
/*   Updated: 2022/11/28 12:14:27 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_arg(const char *str, t_arg **text, va_list arg_info)
{
	if (*str == 'd' || *str == 'i')
	{
		//ft_lstnw('d', va_arg(arg_info, unsigned int), text);
		//put_nbr((unsigned int)va_arg(va_info, unsigned int));
		return (ft_nbrlen(put_nbr((unsigned int)va_arg(va_info, unsigned int))));
	}
	return (0);
}
