/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnw.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:47:44 by alycgaut          #+#    #+#             */
/*   Updated: 2022/11/24 17:51:46 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_arg	*ft_lstnw(char t, void *content, t_arg **text)
{
	t_arg	*new;

	new = (t_arg *)malloc(sizeof(t_arg));
	if (!(new))
		return (NULL);
	new->type = t;
	new->arg = content;
	new->next = NULL;
	if (*text != NULL)
		new->previous = *text;
	return (new);
}

/*int	main(void)
{
	char *data = "I'm a data !";
	t_arg *new = ft_lstnw('s', data);
	printf("%c = type, %s = arg content\n", new->type, (char *)new->arg);
}*/
