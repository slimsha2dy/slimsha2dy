/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrusciante <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 00:44:53 by jfruscia          #+#    #+#             */
/*   Updated: 2022/03/14 01:00:36 by jfruscia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*buf;

	i = 0;
	buf = (char *)malloc(sizeof(char) * (len + 1));
	if (*buf == 0)
		return (0);
	while (i < len)
	{
		buf[i] = s[start];
		i++;
		start++;
	}
	buf[i] = 0;
	return (buf);
}
