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
	
	r = ft_printf("imit : abc%c%c%c\n et %d\n et %s\n", 'd', 'e', 'f', 45, "Hello");
	ft_printf("len of imitation : %d\n", r);
	ft_printf("pointeur en hexa : %p\n et %%\n", &r);
	r = printf("real : abc%c%c%c\n et %d\n et %s\n", 'd', 'e' ,'f', 45, "Hello");
	printf("len of printf : %d\n", r);
	printf("pointeur en hexa = %p\n et %%\n", &r);
	return (0);
}
