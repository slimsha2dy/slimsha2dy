/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:33:51 by hwichoi           #+#    #+#             */
/*   Updated: 2022/03/14 17:21:49 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**alloc_split(char const *s, char c)
{
	int		i;
	char	**buf;
	int		size;

	i = -1;
	size = 0;
	while (s[++i])
	{
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == 0))
			size++;
	}
	buf = (char **)malloc(sizeof(char *) * (size + 1));
	if (*buf == 0)
		return (0);
	buf[size] = 0;
	return (buf);
}

char	*alc_cpy(char const *s, int size)
{
	char	*buf;
	int		i;

	buf = (char *)malloc(sizeof(char) * (size + 1));
	if (*buf == 0)
		return (0);
	i = -1;
	while (++i < size)
		buf[i] = s[i];
	return (buf);
}

char	**ft_split(char const *s, char c)
{
	char	**buf;
	int		i;
	int		cnt;
	int		cpy;

	buf = alloc_split(s, c);
	if (buf == 0)
		return (0);
	i = 0;
	cnt = 0;
	cpy = 0;
	while (buf[i])
	{
		while (s[cnt] == c && s[cnt++])
			cpy++;
		while (s[cnt] != c && s[cnt])
			cnt++;
		buf[i] = alc_cpy(&s[cpy], cnt - cpy);
		if (buf[i] == 0)
			return (0);
		i++;
	}
	return (buf);
}