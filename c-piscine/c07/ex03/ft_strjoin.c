/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 21:22:21 by hwichoi           #+#    #+#             */
/*   Updated: 2022/02/21 14:11:30 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	str_count(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	malloc_cnt(int size, char **strs, char *sep)
{
	int	i;
	int	cnt;

	cnt = 0;
	i = 0;
	while (cnt < size)
		i = i + str_count(strs[cnt++]) + str_count(sep);
	i = i - str_count(sep);
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		cnt;
	int		i;
	int		index;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	i = malloc_cnt(size, strs, sep);
	result = (char *)malloc(sizeof(char) * (i + 1));
	cnt = -1;
	i = 0;
	while (++cnt < size)
	{
		index = 0;
		while (index < str_count(strs[cnt]))
			result[i++] = strs[cnt][index++];
		index = 0;
		while (index < str_count(sep) && cnt < size - 1)
			result[i++] = sep[index++];
	}
	result[i] = '\0';
	return (result);
}
