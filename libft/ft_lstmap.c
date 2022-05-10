/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrusciante <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 02:46:18 by jfruscia          #+#    #+#             */
/*   Updated: 2022/05/11 03:09:17 by jfruscia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list	*ret;
	t_list	*buf;

	if (lst == 0 || f == 0 || del == 0)
		return (0);
	ret = 0;
	while (lst)
	{
		buf = ft_lstnew((*f)(lst->content));
		if (buf == 0)
		{
			ft_lstclear(&ret, del);
			return (0);
		}
		ft_lstadd_back(&ret, buf);
		lst = lst->next;
	}
	return (ret);
}
