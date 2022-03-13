/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:59:29 by hwichoi           #+#    #+#             */
/*   Updated: 2022/02/22 18:47:51 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*f_strdup(char *src, int size)
{
	char	*result;
	int		i;

	result = (char *)malloc(sizeof(char) * (size + 1));
	if (!result)
		return (0);
	i = -1;
	while (++i < size)
		result[i] = src[i];
	result[i] = '\0';
	return (result);
}

int	is_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

char	**str_mal(char *str, char *set, int	*size)
{
	int		i;
	int		j;
	char	**ret;

	i = 0;
	j = 0;
	while (is_charset(str[i], set))
		i++;
	while (str[i])
	{
		if ((is_charset(str[i], set) == 0 && is_charset(str[i + 1], set) == 1)
			|| (is_charset(str[i], set) == 0 && str[i + 1] == '\0'))
			j++;
		i++;
	}
	ret = (char **)malloc(sizeof(char *) * (j + 1));
	if (!ret)
		return (0);
	*size = j;
	return (ret);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		size;
	int		i;
	int		cnt;
	int		index;

	result = str_mal(str, charset, &size);
	i = 0;
	index = 0;
	cnt = 0;
	while (i < size)
	{
		while (is_charset(str[cnt], charset) && str[cnt++])
			index++;
		while (!(is_charset(str[cnt], charset)) && str[cnt])
			cnt++;
		result[i] = f_strdup(&str[index], cnt - index);
		index = cnt;
		i++;
	}
	result[i] = 0;
	return (result);
}
