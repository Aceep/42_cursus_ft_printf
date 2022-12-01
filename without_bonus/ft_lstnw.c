/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnw.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:47:44 by alycgaut          #+#    #+#             */
/*   Updated: 2022/12/01 19:03:42 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lstnw(const char *str, t_arg **text)
{
	*text = (t_arg *)malloc(sizeof(t_arg));
	if (!(text))
		return (0);
	return (read_arg(str, text));
}

// int	main(void)
// {
// 	char *str = "I'm a data %45s45!";
// 	int written = 12;
// 	t_arg *text;
// 	while (*str != '%')
// 		str ++;
// 	str ++;
// 	ft_lstnw(str, &written, &text);
// 	printf("%d = written\n", written);
// 	printf("%d = width\n", text->width);
// len of imitation : len of printf : }