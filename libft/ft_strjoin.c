/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrusciante <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 01:00:59 by jfruscia          #+#    #+#             */
/*   Updated: 2022/03/14 01:10:34 by jfruscia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char const *s)
{
	int	i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}

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
