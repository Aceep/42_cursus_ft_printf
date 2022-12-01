/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_str_char.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 19:07:29 by alycgaut          #+#    #+#             */
/*   Updated: 2022/12/01 19:07:33 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	put_char(unsigned int c, t_arg **text)
{
	if (text)
		put_am(text, 1);
	ft_putchar(c);
	if ((*text)->width != 0)
		return ((*text)->width);
	else
		return (1);
}

int	put_str(char *s, t_arg **text)
{
	if (text)
		put_am(text, ft_strlen(s));
	ft_putstr(s);
	if ((*text)->width != 0)
		return ((*text)->width);
	else
		return (ft_strlen(s));
}
