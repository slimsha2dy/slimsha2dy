/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 21:24:50 by hwichoi           #+#    #+#             */
/*   Updated: 2022/04/28 21:24:53 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_init(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*buf;
	int		i1;
	int		i2;
	int		size;

	size = 0;
	i1 = 0;
	while (s1[i1])
	{
		if (is_init(s1[i1++], set) == 0)
			size++;
	}
	buf = (char *)malloc(sizeof(char) * (size + 1));
	if (*buf == 0)
		return (0);
	i1 = -1;
	i2 = 0;
	while (s1[++i1])
	{
		if (is_init(s1[i1], set) == 0)
			buf[i2++] = s1[i1];
	}
	buf[i2] = 0;
	return (buf);
}
