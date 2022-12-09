/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_use.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 19:07:40 by alycgaut          #+#    #+#             */
/*   Updated: 2022/12/09 17:33:46 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	put_width(t_arg **text, size_t len)
{
	char	*ret;
	int		i;

	i = 0;
	ret = (char *)malloc(sizeof(char) * (*text)->width);
	if (!ret)
		return ;
	(*text)->precision -= len;
	while (len > 0)
	{
		ret[i] = ' ';
		len --;
		i ++;
	}
	if ((*text)->precision != 0)
	{
		while ((*text)->precision)
		{
			ret[i] = '0';
			(*text)->precision --;
			i ++;
		}
	}
	ft_putstr(ret);
}

void	put_am(t_arg **text, size_t len)
{
	put_width(text, len);
}
