/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 20:00:07 by hwichoi           #+#    #+#             */
/*   Updated: 2022/02/15 17:21:05 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_same(char *str, char *to_find)
{
	while (*to_find != '\0')
	{
		if (*str != *to_find)
			return (0);
		str++;
		to_find++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == to_find[0])
		{
			if (is_same(str, to_find))
				return (str);
		}
		str++;
	}
	return (0);
}
