/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 18:22:06 by alycgaut          #+#    #+#             */
/*   Updated: 2022/11/24 18:56:15 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_arg(const char *str, t_arg **text, va_list arg_info, int written)
{
	if (*str == 'd' || *str == 'i')
		ft_lstnw('d', (unsigned int)va_arg(arg_info, unsigned int));
	return (0);
}
