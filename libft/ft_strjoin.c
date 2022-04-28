/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 21:24:02 by hwichoi           #+#    #+#             */
/*   Updated: 2022/04/28 21:24:05 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*buf;
	int		size;
	int		i;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	buf = (char *)malloc(sizeof(char) * size);
	if (*buf == 0)
		return (0);
	i = 0;
	while (*s1)
	{
		buf[i++] = *s1;
		s1++;
	}
	while (*s2)
	{
		buf[i++] = *s2;
		s2++;
	}
	buf[i] = 0;
	return (buf);
}
