/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_use.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 19:07:40 by alycgaut          #+#    #+#             */
/*   Updated: 2022/12/01 19:07:44 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	put_width(int wid)
{
	while (wid)
	{
		ft_putstr(" ");
		wid --;
	}
}

void	put_am(t_arg **text, size_t written)
{
	if ((*text)->width != 0)
		put_width((*text)->width - written);
}
