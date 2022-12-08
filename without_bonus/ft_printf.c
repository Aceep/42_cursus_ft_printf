/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:16:33 by alycgaut          #+#    #+#             */
/*   Updated: 2022/12/08 15:00:07 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list		arg_info;
	size_t		w;

	va_start(arg_info, str);
	w = 0;
	while (*(str) != '\0')
	{
		if (*str != '%')
		{
			ft_putchar(*str);
			w ++;
		}
		else
		{
			str ++;
			if (check_arg(&w, arg_info, str) != 0)
				return (0);
		}
		str ++;
	}
	return (w);
}
