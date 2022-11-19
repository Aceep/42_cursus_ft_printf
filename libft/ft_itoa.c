/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:43:13 by alycgaut          #+#    #+#             */
/*   Updated: 2022/11/10 14:42:36 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_nb(int size, char *nbr, long long int i)
{
	nbr[size] = '\0';
	while (i)
	{
		size --;
		nbr[size] = (i % 10) + '0';
		i /= 10;
	}
	if (nbr[1] != '\0' && size == 1)
		nbr[0] = '-';
	else if (nbr[1] == '\0' && size == 1)
		nbr[0] = '0';
}

char	*ft_itoa(int n)
{
	char			*nbr;
	long long int	i;
	size_t			size;

	i = n;
	if (i <= 0)
	{
		i = -i;
		size = 1;
	}
	else
		size = 0;
	while (n)
	{
		n /= 10;
		size ++;
	}
	nbr = (char *)malloc(sizeof(char) * (size + 1));
	if (!(nbr))
		return (0);
	ft_nb(size, nbr, i);
	return (nbr);
}
/*
int	main(void)
{
	int n = -45684;
	ft_itoavi (n);
	return (0);
}*/
