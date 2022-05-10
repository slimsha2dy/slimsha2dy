/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrusciante <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 00:09:18 by jfruscia          #+#    #+#             */
/*   Updated: 2022/05/11 02:42:16 by jfruscia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*buf;
	t_list	*cur;

	if (lst == 0 || del == 0)
		return ;
	cur = *lst;
	while (cur)
	{
		buf = cur->next;
		ft_lstdelone(cur, del);
		cur = buf;
	}
	free(*lst);
}
