/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 21:23:49 by hwichoi           #+#    #+#             */
/*   Updated: 2022/04/28 21:23:53 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strchr(const char *s, int c)
{
	unsigned char	to_find;
	int				i;

	to_find = (unsigned char)c;
	i = 0;
	while (s[i] != 0)
	{
		if (s[i] == to_find)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == to_find)
		return ((char *)&s[i]);
	return (0);
}
