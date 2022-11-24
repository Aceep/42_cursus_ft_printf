/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:16:33 by alycgaut          #+#    #+#             */
/*   Updated: 2022/11/24 18:58:08 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	stock_str(const char *str, t_arg **text)
{
	int	i;
	char	*s1;

	i = 0;
	while (str[i] != '%' && str[i])
		i ++;
	s1  = ft_substr(str, 0, i);
	*text = ft_lstnw('s', (char *)s1, &(*text));
	return (ft_strlen(s1));
}

int	ft_printf(const char *str, ...)
{
	va_list	arg_info;
	va_start(arg_info, str);
	size_t	written;
	t_arg	*text;

	written = 0;
	while (*str != '\0')
	{
		if (*str != '%')
			written += stock_str(str, &text); 
		else 
			check_arg(str, &text, arg_info, written);
		str += written;
	}
	//printf("%u", (unsigned int)text->arg);
	return (written);
}
