/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_arg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 19:06:53 by alycgaut          #+#    #+#             */
/*   Updated: 2022/12/09 17:35:06 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	read_arg_width(const char *str, t_arg **text)
{
	int		i;
	char	*width;
	int		wid;

	i = 0;
	printf("here");
	while (str[i] >= '0' && str[i] <= '9')
		i ++;
	width = ft_substr(str, 0, i);
	wid = ft_atoi(width);
	(*text)->width = wid;
	return (free(width), i);
}

int	read_arg_prec(const char *str, t_arg **text)
{
	int		i;
	char	*precision;
	int		prec;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
		i ++;
	precision = ft_substr(str, 0, i);
	prec = ft_atoi(precision);
	(*text)->precision = prec;
	return (free(precision), i);
}
/*
int main(void)
{
	int wid;
	const char *s = "je suis le %23s test";
	wid = 0;
	while (*s != '%')
		s ++;
	s ++;
	read_arg(s, &wid);
	printf("%d", wid);
}*/
