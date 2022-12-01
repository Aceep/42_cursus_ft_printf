/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:16:33 by alycgaut          #+#    #+#             */
/*   Updated: 2022/12/01 19:27:41 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list		arg_info;
	size_t		w;
	t_arg		*text;

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
			str += ft_lstnw(str, &text);
			if (check_arg(&w, arg_info, str, &text) != 0)
				return (free(text), 0);
			free(text);
		}
		str ++;
	}
	return (w);
}
