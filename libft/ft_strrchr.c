/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 21:24:44 by hwichoi           #+#    #+#             */
/*   Updated: 2022/04/28 21:24:48 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*buf;
	char	to_find;

	buf = (char *)s;
	len = ft_strlen(buf);
	to_find = (char)c;
	while (len >= 0)
	{
		if (s[len] == to_find)
			return ((char *)&s[len]);
		len--;
	}
	return (0);
}
