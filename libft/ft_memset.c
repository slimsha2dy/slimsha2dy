/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 17:54:11 by hwichoi           #+#    #+#             */
/*   Updated: 2022/03/31 20:12:23 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			cnt;
	unsigned char	*ret;
	unsigned char	input;

	ret = b;
	cnt = 0;
	input = c;
	while (cnt < len)
	{
		*ret = input;
		ret++;
		cnt = cnt + sizeof(char);
	}
	return (b);
}
