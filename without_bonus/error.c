/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 19:07:07 by alycgaut          #+#    #+#             */
/*   Updated: 2022/12/01 19:07:13 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	report_error(char *error_message)
{
	ft_putstr(error_message);
}

int	check_error(t_arg **text, char str)
{
	if (str == '%' && (*text)->width != 0)
		return (report_error("Le % ne prend pas de taille de champs\n"), -1);
	return (0);
}
