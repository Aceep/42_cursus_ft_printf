/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:43:43 by alycgaut          #+#    #+#             */
/*   Updated: 2022/11/24 17:13:46 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*position;

	if (!lst)
		return ;
	position = (*lst)->next;
	while (position)
	{
		position = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = position;
	}
}
