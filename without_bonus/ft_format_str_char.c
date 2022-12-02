/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_str_char.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 19:07:29 by alycgaut          #+#    #+#             */
/*   Updated: 2022/12/02 16:28:27 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
int	put_char(unsigned int c)
{
	ft_putchar(c);
	return (1);
}

int	put_str(char *s)
{
	ft_putstr(s);
	return (ft_strlen(s));
}
