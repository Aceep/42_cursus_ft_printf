/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:50:13 by alycgaut          #+#    #+#             */
/*   Updated: 2022/11/28 13:21:31 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int	r;
	
	r = ft_printf("imit :\ncaracteres : abc%c%c%c\nflag d : %d\nstring :%s\npointeur en hexa : %p\npourcent : %%\n", 'd', 'e', 'f', 45, "Hello", &r);
	ft_printf("len of imitation : %d\n", r);
	r = printf("real :\ncaracteres : abc%c%c%c\nflag d : %d\nstring : %s\npointeur en hexa = %p\npourcent : %%\n", 'd', 'e' ,'f', 45, "Hello", &r);
	printf("len of printf : %d\n", r);
	return (0);
}
